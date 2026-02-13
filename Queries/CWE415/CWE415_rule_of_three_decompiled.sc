/* The rule of three in C++.
    * Destructor.
    * Copy Constructor.
    * Copy Assignment Operator.
*/

var counter = 1

// Search for methods that have the delete operator (that would be our destructors).
lazy val destructors = cpg.method
                       .where(m => m.body.ast.isCall.name(".*delete.*"))
                       .toList

// Search for copy assignment operators.
lazy val copy_assignment_operators = cpg.method
                                     .filter(_.parameter.size == 2)
                                     .map
                                     { m =>
                                            val parameter_1 = m.parameter.filter(_.order == 1).name.toList
                                            val parameter_2 = m.parameter.filter(_.order == 2).name.toList
                                            (m, parameter_1, parameter_2)
                                     }
                                     .filter
                                     { case (m, parameter_1, parameter_2) =>
                                         lazy val method_body = m.block.toList
                                         lazy val condition = method_body.ast.isControlStructure.toList
                                         lazy val condition_statement = condition.ast.isCall.name("<operator>.notEquals").toList
                                         lazy val condition_body = condition.ast.isBlock.toList
                                         lazy val assignment_1 = condition_body.ast.isCall.name("<operator>.assignment").toList
                                         lazy val assignment_1_left_side = assignment_1.filter(call => call.code.contains("strlen")).argument(1).ast.isIdentifier.code.toList
                                         lazy val assignment_strlen = condition_body.ast.isCall.name("<operator>.assignment").ast.isCall.name("strlen").toList
                                         lazy val assignment_2 = assignment_strlen.postDominatedBy.ast.isCall.name("<operator>.assignment").toList
                                         lazy val assignment_2_left_side = assignment_2.filter(call => call.code.contains("operator_new__")).argument(1).ast.isIdentifier.code.toList
                                         lazy val assignment_new = assignment_strlen.postDominatedBy.ast.isCall.name("<operator>.assignment").ast.isCall.name("operator_new__").toList
                                         lazy val assignment_ptr = assignment_new.postDominatedBy.ast.isCall.name("<operator>.assignment").toList
                                         lazy val strcpy_calls = assignment_ptr.postDominatedBy.ast.isCall.name("strcpy").toList

                                         condition_statement.ast.isIdentifier.exists(id => parameter_1.contains(id.code)) &&
                                         condition_statement.ast.isIdentifier.exists(id => parameter_2.contains(id.code)) &&
                                         assignment_strlen.ast.isIdentifier.exists(id => parameter_2.contains(id.code)) &&
                                         assignment_new.ast.isIdentifier.exists(id => assignment_1_left_side.contains(id.code)) &&
                                         assignment_ptr.argument.order(1).ast.isCall.name("<operator>.indirection").ast.isIdentifier.exists(id => parameter_1.contains(id.code)) &&
                                         assignment_ptr.argument.order(2).ast.isIdentifier.exists(id => assignment_2_left_side.contains(id.code)) &&
                                         strcpy_calls.argument(1).ast.isIdentifier.exists(id => parameter_1.contains(id.code)) &&
                                         strcpy_calls.argument(2).ast.isIdentifier.exists(id => parameter_2.contains(id.code))
                                     }
                                     .toList

// Search for copy constructors.
lazy val copy_constructors = cpg.method
                             .filter(_.parameter.size == 2)
                             .map
                             { m =>
                                 val parameter_1 = m.parameter.filter(_.order == 1).name.toList
                                 val parameter_2 = m.parameter.filter(_.order == 2).name.toList
                                 (m, parameter_1, parameter_2)
                             }
                             .filter
                             { case (m, parameter_1, parameter_2) =>
                                 lazy val method_body = m.block.toList
                                 lazy val assignment_1 = method_body.ast.isCall.name("<operator>.assignment").toList
                                 lazy val assignment_1_left_side = assignment_1.filter(call => call.code.contains("strlen")).argument(1).ast.isIdentifier.code.toList
                                 lazy val assignment_strlen = method_body.ast.isCall.name("<operator>.assignment").ast.isCall.name("strlen").toList
                                 lazy val assignment_2 = assignment_strlen.postDominatedBy.ast.isCall.name("<operator>.assignment").toList
                                 lazy val assignment_2_left_side = assignment_2.filter(call => call.code.contains("operator_new__")).argument(1).ast.isIdentifier.code.toList
                                 lazy val assignment_new = assignment_strlen.postDominatedBy.ast.isCall.name("<operator>.assignment").ast.isCall.name("operator_new__").toList
                                 lazy val assignment_ptr = assignment_new.postDominatedBy.ast.isCall.name("<operator>.assignment").toList
                                 lazy val strcpy_calls = assignment_ptr.postDominatedBy.ast.isCall.name("strcpy").toList

                                 assignment_strlen.ast.isIdentifier.exists(id => parameter_2.contains(id.code)) &&
                                 assignment_new.ast.isIdentifier.exists(id => assignment_1_left_side.contains(id.code)) &&
                                 assignment_ptr.argument.order(1).ast.isCall.name("<operator>.indirection").ast.isIdentifier.exists(id => parameter_1.contains(id.code)) &&
                                 assignment_ptr.argument.order(2).ast.isIdentifier.exists(id => assignment_2_left_side.contains(id.code)) &&
                                 strcpy_calls.argument(1).ast.isIdentifier.exists(id => parameter_1.contains(id.code)) &&
                                 strcpy_calls.argument(2).ast.isIdentifier.exists(id => parameter_2.contains(id.code))
                             }
                             .toList


// Check the three elements.
val has_destructor = destructors.nonEmpty
val has_copy_constructor = copy_constructors.nonEmpty
val has_copy_assignment_operator = copy_assignment_operators.nonEmpty

lazy val analyzedFile = destructors.headOption.flatMap(_.file.name.headOption).getOrElse("?")

if (has_destructor && has_copy_constructor && !has_copy_assignment_operator)
{
    val msg = s"[$counter] Result: Rule of Three Violation (missing copy assignment operator):$analyzedFile;STATUS:PENDING;NOTE:NONE"
    
    println("\n")
    println(msg)
    println("\n")

    counter += 1
}

if (has_destructor && has_copy_assignment_operator && !has_copy_constructor)
{
    val msg = s"[$counter] Result: Rule of Three Violation (missing copy constructor):$analyzedFile;STATUS:PENDING;NOTE:NONE"
    
    println("\n")
    println(msg)
    println("\n")

    counter += 1
}
/* The rule of three in C++.
    * Destructor.
    * Copy Constructor.
    * Copy Assignment Operator.
*/

var counter = 1

// Search for destructors that have the delete operator.
lazy val destructors = cpg.method.name("^~.*").toList

lazy val class_names = destructors.map( m => m.name.replaceAll("^~(.*)", "$1")).toList

// Search for copy constructors.
lazy val copy_constructors = cpg.method
                        .filter(m => class_names.contains(m.name))
                        .filter(m => m.parameter.exists(p => class_names.exists(cn => p.code.contains(cn) && p.code.contains("&"))))
                        .map
                        { m =>
                            val object_name = m.code.replaceAll("(?s).*?&\\s*(\\w+).*", "$1")
                            (m, object_name)
                        }
                        .filter
                        { case (m, object_name) =>
                            lazy val assignment = m.call.name("<operator>.assignment").toList
                            lazy val strcpy_calls = assignment.postDominatedBy.ast.isCall.name("strcpy").toList

                            assignment.ast.isCall.name("<operator>.fieldAccess").ast.isIdentifier.code.contains("this") &&
                            assignment.ast.isCall.name("<operator>.new").ast.isIdentifier.code.contains(object_name) &&
                            strcpy_calls.argument(1).ast.isIdentifier.code.contains("this") &&
                            strcpy_calls.argument(2).ast.isIdentifier.code.contains(object_name)
                        }
                        .toList

// Search for copy assignment operators.
lazy val copy_assignment_operator = cpg.method
                                .filter(_.astParentType == "TYPE_DECL")
                                .filter(_.name == "=")
                                .map
                                { m =>
                                    val copy_assignment_operator_parameters = m.parameter.filter(_.order == 1).name.toList
                                    (m, copy_assignment_operator_parameters)
                                }
                                .filter
                                { case (m, copy_assignment_operator_parameters) =>
                                    lazy val assignment_body = m.block.toList
                                    lazy val condition = assignment_body.ast.isControlStructure.toList
                                    lazy val condition_statement = condition.ast.isCall.name("<operator>.notEquals").toList
                                    lazy val condition_body = condition.ast.isBlock.toList
                                    lazy val assignment = condition_body.ast.isCall.name("<operator>.assignment").toList
                                    lazy val strcpy_calls = assignment.postDominatedBy.ast.isCall.name("strcpy").toList

                                    condition_statement.ast.isIdentifier.code.contains("this") &&
                                    condition_statement.ast.isIdentifier.exists(id => copy_assignment_operator_parameters.contains(id.code)) &&
                                    assignment.ast.isCall.name("<operator>.indirectFieldAccess").ast.isIdentifier.code.contains("this") &&
                                    assignment.ast.isCall.name("<operator>.new").ast.isIdentifier.exists(id => copy_assignment_operator_parameters.contains(id.code)) &&
                                    strcpy_calls.argument(1).ast.isIdentifier.code.contains("this") &&
                                    strcpy_calls.argument(2).ast.isIdentifier.exists(id => copy_assignment_operator_parameters.contains(id.code))
                                }
                                .toList

// Check the three elements.
val has_destructors = destructors.nonEmpty
val has_copy_constructors = copy_constructors.nonEmpty
val has_copy_assignment_operator = copy_assignment_operator.nonEmpty

lazy val analyzedFile = destructors.headOption.flatMap(_.file.name.headOption).getOrElse("?")

if (has_destructors && has_copy_constructors && !has_copy_assignment_operator)
{
    val msg = s"[$counter] Result: Rule of Three Violation (missing copy assignment operator):$analyzedFile;STATUS:PENDING;NOTE:NONE"
    
    println("\n")
    println(msg)
    println("\n")

    counter += 1
}

if (has_destructors && has_copy_assignment_operator && !has_copy_constructors)
{
    val msg = s"[$counter] Result: Rule of Three Violation (missing copy constructor):$analyzedFile;STATUS:PENDING;NOTE:NONE"
    
    println("\n")
    println(msg)
    println("\n")

    counter += 1
}

lazy val counter = 1

lazy val copy_assignment_operator = cpg.method.filter(_.astParentType == "TYPE_DECL").filter(_.name == "=").toList

lazy val copy_assignment_operator_parameters = copy_assignment_operator.parameter.filter(_.order == 1).name.toList

lazy val copy_assignment_operator_body = copy_assignment_operator.block.toList

lazy val source = copy_assignment_operator_body
                  .ast.isCall.name(".*delete.*")
                  .ast.isCall.name("<operator>.indirectFieldAccess")
                  .where(_.argument(1).filter(_.code == "this")).toList

lazy val post_dominated_nodes = source.postDominatedBy.toList

lazy val strcpy_calls = copy_assignment_operator_body.ast.isCall.name("strcpy")
                   .where(_.ast.isCall.name("<operator>.indirectFieldAccess").argument(1).filter(_.code == "this"))
                   .toList

lazy val sinks = post_dominated_nodes.filter(pdn => strcpy_calls.exists(sc => pdn.code == sc.code)).toList

lazy val dominating_nodes = source.dominatedBy.toList

lazy val checks = dominating_nodes.isCall.name("<operator>.notEquals").toList

lazy val not_checked = copy_assignment_operator_parameters.filterNot { paramName => checks.where(_.ast.isIdentifier.name(paramName)).nonEmpty }.toList

lazy val results = sinks
              .where(_.ast.isCall.name("<operator>.fieldAccess").order(2).ast.isIdentifier.filter(node => not_checked.contains(node.code)))
              .map(n => s"Result: ${n.code};Double Free;${n.file.name.headOption.getOrElse("?")}:${n.lineNumber.getOrElse(-1)};STATUS:PENDING;NOTE:NONE")
              .distinct
              .toList

println("\n")
results.zipWithIndex.foreach { case (row, i) =>
  val indexStr = f"${i + 1}%02d"
  println(s"[$indexStr] $row")
}
println("\n")
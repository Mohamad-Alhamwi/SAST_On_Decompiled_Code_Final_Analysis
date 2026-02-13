lazy val counter = 1

lazy val copy_assignment_operator = cpg.method.filter(_.parameter.size == 2).toList

lazy val cao_first_parameter = copy_assignment_operator.parameter.filter(_.order == 1).name.toList

lazy val cao_second_parameter = copy_assignment_operator.parameter.filter(_.order == 2).name.toList

lazy val copy_assignment_operator_body = copy_assignment_operator.block.toList

lazy val source = copy_assignment_operator_body
                  .ast.isCall.name(".*delete.*")
                  .argument(1)
                  .ast
                  .isIdentifier
                  .filter(node => cao_first_parameter.contains(node.code))
                  .toList

lazy val post_dominated_nodes = source.postDominatedBy.toList

lazy val sinks = post_dominated_nodes
                .ast.isCall.name("strcpy")
                .where(_.argument.order(1).ast.isCall.ast.isIdentifier.filter(node => cao_first_parameter.contains(node.code)))
                .where(_.argument.order(2).ast.isCall.ast.isIdentifier.filter(node => cao_second_parameter.contains(node.code)))
                .toList

lazy val sink_pairs = sinks.map ( s =>
    val dst = s.argument.order(1).ast.isCall.ast.isIdentifier.name.headOption.getOrElse("")
    val src = s.argument.order(2).ast.isCall.ast.isIdentifier.name.headOption.getOrElse("")
    (dst, src)
).toList

lazy val dominating_nodes = source.dominatedBy.toList

lazy val checks = dominating_nodes.isCall.name("<operator>.notEquals").toList

lazy val checked_pairs = checks.map ( chk =>
    val left  = chk.ast.isIdentifier.order(1).name.headOption.getOrElse("")
    val right = chk.ast.isIdentifier.order(2).name.headOption.getOrElse("")
    (left, right)
)

val unprotected_sinks = sinks
                        .zip(sink_pairs)
                        .filter { case (_, (dst, src)) => !checked_pairs.contains((dst, src)) }.toList
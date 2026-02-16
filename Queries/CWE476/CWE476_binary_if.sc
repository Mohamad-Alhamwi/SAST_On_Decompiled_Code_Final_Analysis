lazy val counter = 1

lazy val sources = cpg.call("<operator>.assignment").where(_.argument(2).filter(_.code == "<unknown> NULL")).argument(1).toList

lazy val target_nodes = sources.dominates.toList

lazy val and_opp = cpg.call("<operator>.and").toList

lazy val check_nodes = and_opp.filter(a_o => target_nodes.exists(tn => a_o.code == tn.code)).toList

lazy val null_comparisons = cpg.call("<operator>.notEquals").where(_.argument(2).codeExact("<unknown> NULL")).toList

lazy val dereferences = cpg.call("<operator>.indirectFieldAccess").toList

lazy val desired_checks = check_nodes.filter { check =>
    val left  = check.argument(1)  // Null comparison side.
    val right = check.argument(2)  // Dereference side.

    null_comparisons.exists(_.code == left.code) &&
    dereferences.exists(d => right.ast.isCall.code.l.exists(_ == d.code)) &&
    sources.exists(s => left.ast.isCall.argument(1).isIdentifier.code.l.exists(_ == s.code)) &&
    sources.exists(s => right.ast.isCall.name("<operator>.indirectFieldAccess").argument(1).code.l.exists(_ == s.code))
}.toList

// Format the output.
lazy val results = desired_checks
  .map(n => s"Result: ${n.code};NULL Pointer Dereference;${n.file.name.headOption.getOrElse("?")}:${n.lineNumber.getOrElse(-1)};STATUS:PENDING;NOTE:NONE")
  .distinct
  .toList

println("\n")
results.zipWithIndex.foreach { case (row, i) =>
  val indexStr = f"${i + 1}%02d"
  println(s"[$indexStr] $row")
}
println("\n")
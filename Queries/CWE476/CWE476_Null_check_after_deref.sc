lazy val counter = 1

lazy val pointers = cpg.call.name("malloc").inAssignment.target.ast.isIdentifier.toList

lazy val dereferences = cpg.call.name("<operator>.indirection").argument(1).isIdentifier.toList

lazy val matched_dereferences = dereferences.filter(d => pointers.exists(p => p.name == d.name)).toList

lazy val null_checks = cpg.call("<operator>.notEquals").where(_.argument(2).filter(_.code == "<unknown> NULL")).toList

/* For decompiled code switch to this line:
lazy val null_checks = cpg.call("<operator>.notEquals").where(_.argument(2).filter(_.code == "(undefined4 *)0x0")).toList
*/

lazy val post_dominating_nodes = matched_dereferences.postDominatedBy.toList

lazy val matched_null_checks = null_checks.filter(nc => post_dominating_nodes.exists(pdn => nc.code == pdn.code))

lazy val results = matched_null_checks
  .map(n => s"Result: ${n.code};Check for NULL after dereferencing the pointer;${n.file.name.headOption.getOrElse("?")}:${n.lineNumber.getOrElse(-1)};STATUS:PENDING;NOTE:NONE")
  .distinct
  .toList

results.zipWithIndex.foreach { case (row, i) =>
  val indexStr = f"${i + 1}%02d"
  println(s"[$indexStr] $row")
}

println("\n")

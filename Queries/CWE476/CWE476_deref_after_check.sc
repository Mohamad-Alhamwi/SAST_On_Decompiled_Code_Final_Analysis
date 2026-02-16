lazy val null_checks = cpg.call("<operator>.equals").where(_.argument(2).filter(_.code == "<unknown> NULL")).toList

lazy val dereferences = cpg.call.name("<operator>.indirection").argument(1).isIdentifier.toList

lazy val target_nodes = null_checks.dominates.toList

lazy val dereferenced_after_check_nodes = dereferences.filter(d => target_nodes.exists(tn => d.code == tn.code))

lazy val results = dereferenced_after_check_nodes
  .map(n => s"Result: ${n.code};Check for NULL but still dereference the pointer;${n.file.name.headOption.getOrElse("?")}:${n.lineNumber.getOrElse(-1)};STATUS:PENDING;NOTE:NONE")
  .distinct
  .toList

results.zipWithIndex.foreach { case (row, i) =>
  val indexStr = f"${i + 1}%02d"
  println(s"[$indexStr] $row")
}

println("\n")

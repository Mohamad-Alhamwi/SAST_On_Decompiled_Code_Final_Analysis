lazy val counter = 1

lazy val sources = cpg.call("<operator>.assignment").where(_.argument(2).filter(node => node.code == "(undefined4 *)0x0" || node.code == "(undefined8 *)0x0" || node.code == "(char *)0x0" || node.code == "<unknown> NULL")).argument(1).toList

lazy val null_checks = cpg.call("<operator>.notEquals").where(_.argument(2).filter(node => node.code == "(undefined4 *)0x0" || node.code == "(undefined8 *)0x0" || node.code == "(char *)0x0" || node.code == "<unknown> NULL")).argument(1).toList

lazy val sinks = cpg.call.name("<operator>.indirection").argument(1).isIdentifier.toList

lazy val all_flows = sinks.reachableByFlows(sources).toList

lazy val violating_flows = all_flows.filter{flow => !flow.elements.exists(node => null_checks.contains(node))}.toList

// Format the output.
lazy val results = violating_flows.map { flow =>
    // Extract each node's "file:line"
    val pathStr = flow.elements
        .map { n =>
            val file = n.file.name.headOption.getOrElse("?")
            val line = n.lineNumber.getOrElse(-1)
            s"$file:$line"
        }.mkString(" ==> ")

    // Use the sink’s code (last element) as representative.
    val sinkCode = flow.elements.lastOption.map(_.code).getOrElse("?")

    s"Result: $sinkCode;NULL Pointer Dereference;$pathStr;STATUS:PENDING;NOTE:NONE"
}
.distinct.toList

println("\n")
results.zipWithIndex.foreach { case (row, i) =>
  val indexStr = f"${i + 1}%02d"
  println(s"[$indexStr] $row")
}
println("\n")

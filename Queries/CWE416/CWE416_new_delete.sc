lazy val counter = 1

// Freed identifiers.
lazy val sources = cpg.call.name(".*delete.*").argument(1).toList

// Dereferences (All sinks except delete).
lazy val sinks = cpg.call.whereNot(_.name(".*delete.*")).argument(1).isIdentifier.toList

// All flows.
lazy val all_flows = sinks.reachableByFlows(sources).toList

// Format the output.
lazy val results = all_flows.map { flow =>
    // Extract each node's "file:line"
    val pathStr = flow.elements
        .map { n =>
            val file = n.file.name.headOption.getOrElse("?")
            val line = n.lineNumber.getOrElse(-1)
            s"$file:$line"
        }.mkString(" ==> ")

    // Use the sink’s code (last element) as representative.
    val sinkCode = flow.elements.lastOption.map(_.code).getOrElse("?")

    s"Result: $sinkCode;Use after free;$pathStr;STATUS:PENDING;NOTE:NONE"
}
.distinct.toList

println("\n")
results.zipWithIndex.foreach { case (row, i) =>
  val indexStr = f"${i + 1}%02d"
  println(s"[$indexStr] $row")
}
println("\n")
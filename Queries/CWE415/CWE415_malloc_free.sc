// The original query was taken from this research repository: https://github.com/elManto/SAST_on_Decompilers. We just tweaked it a bit. 

lazy val counter = 1

lazy val freed_identifiers = cpg.call.name("free").argument(1).toList

// The raw flows.
lazy val all_free_flows = freed_identifiers.reachableBy(freed_identifiers).toList

// The baseline flows.
lazy val single_free_flows = freed_identifiers.reachableBy(freed_identifiers).dedup.toList

// The double-free candidate set.
lazy val twice_freed = all_free_flows.diff(single_free_flows)

lazy val paths = freed_identifiers.reachableByFlows(twice_freed).toList

// Format the output.
lazy val results = paths.map { flow =>
    // Extract each node's "file:line"
    val pathStr = flow.elements
        .map { n =>
            val file = n.file.name.headOption.getOrElse("?")
            val line = n.lineNumber.getOrElse(-1)
            s"$file:$line"
        }.mkString(" ==> ")

    // Use the sink’s code (last element) as representative.
    val sinkCode = flow.elements.lastOption.map(_.code).getOrElse("?")

    s"Result: $sinkCode;Double Free;$pathStr;STATUS:PENDING;NOTE:NONE"
}
.distinct.toList

println("\n")
results.zipWithIndex.foreach { case (row, i) =>
  val indexStr = f"${i + 1}%02d"
  println(s"[$indexStr] $row")
}
println("\n")

// The original query was taken from this research repository: https://github.com/elManto/SAST_on_Decompilers. We just tweaked it a bit.

lazy val counter = 1

// All expressions that are passed to free functions.
lazy val freed_arguments = cpg.call.name(".*delete.*").argument(1).toList

// Every path where a value that was freed once reaches another free call.
lazy val all_free_flows = freed_arguments.reachableBy(freed_arguments).toList

// Unique logical flows.
lazy val unique_free_flows = freed_arguments.reachableBy(freed_arguments).dedup.toList

// The double-free candidate set.
lazy val twice_freed = all_free_flows.diff(unique_free_flows)

lazy val paths = freed_arguments.reachableByFlows(twice_freed).toList

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

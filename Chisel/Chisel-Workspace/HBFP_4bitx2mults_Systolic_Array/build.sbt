scalaVersion := "2.13.8"

scalacOptions ++= Seq(
  "-deprecation",
  "-feature",
  "-unchecked",
  // "-Xfatal-warnings",
  "-language:reflectiveCalls",
)

val chiselVersion = "3.5.6"
addCompilerPlugin("edu.berkeley.cs" %% "chisel3-plugin" % chiselVersion cross CrossVersion.full)
libraryDependencies += "edu.berkeley.cs" %% "chisel3" % chiselVersion
libraryDependencies += "edu.berkeley.cs" %% "chiseltest" % "0.5.6"
libraryDependencies += "com.lihaoyi" %% "scalatags" % "0.9.4"
// libraryDependencies += "com.github.tototoshi" %% "scala-xlsx-reader" % "2.0.0"

// libraryDependencies ++= Seq(
//   "org.apache.poi" % "poi" % "VERSION",
//   "org.apache.poi" % "poi-ooxml" % "VERSION",
//   "org.apache.poi" % "poi-ooxml-schemas" % "VERSION",
//   "org.apache.xmlbeans" % "xmlbeans" % "VERSION"
// )

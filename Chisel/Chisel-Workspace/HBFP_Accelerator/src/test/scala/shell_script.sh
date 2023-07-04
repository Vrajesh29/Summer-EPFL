#!/bin/bash

# Define the number of iterations
ITERATIONS=10
# LOCATION1="/Documents/Chisel/Chisel-Workspace/HBFP_Accelerator/src/test/scala"

for ((i=1; i<=ITERATIONS; i++))
do
  echo "Running iteration $i"

#   cd $LOCATION1
  # Run the Python file
  python3 script.py

  # Run the Scala file

  scala multSpec.scala

  echo "Iteration $i completed"
done

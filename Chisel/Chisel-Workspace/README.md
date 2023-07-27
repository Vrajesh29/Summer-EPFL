This directory is organised as follows:

1. HBFP folder, HBFP_optimized folder and Mult folder: These folder contains codes for simple FP multiplication of two numbers, HBFP multiplication for two numbers and so on which I wrote during the first month for learning chisel. You might find these absolutely useless since much better codes have been written in other folders.

2. HBFP_Accelerator: This folder contains all the necessary codes for the matrix multiplication on Systolic array using FP and HBFP (Normal HBFP as well as Mixed Mantissa baserd HBFP) number system. It also contains the most optimized code for the Adder tree. The HBFP tensor code, where each tensor has multiple HBFP blocks is also in this directory. I have re-organised this directory to many sub-directories for easier access. So you may also ignore this directory. Note that everything is a mess here and everything here has been split properly. 

3. FP_Systolic_Array: 
Contains a pretty organised Systolic array based Matrix Multiplication. FP_Systolic_Array --> src --> main --> scala containes the chisel codes for all the modules and submodules. The Systolic_Array.scala is the TOP MODULE.

FP_Systolic_Array --> src --> test --> scala contains a python script(GEMM.py) to generate random matrices and their multiplication. It also contains the tesbench which uses verilator as backend to accelerate the testing process.

You may go to the location specified in the test bench to access the VCD file and have a look at the waveforms in GTKwave. 

There is the verilog file of the Top module right inside the FP_Systolic_Array folder. If you need the verilog codes of only the submodules than you may go the the chisel program of it and add a line to emit verilog code and write "sbt run" in the terminal. Kindly note that everything is parametrized so if you want verilog for some other configuration, change the parameters where you are emitting the verilog code in the chisel file.

You may also find a system verilog file along with the VCD file.

For easy access, the following is the location of the VCD file: FP_Systolic_Array --> test --> FPpass --> FP.

4. HBFP_Systolic_Array:
Contains a pretty organised Systolic array based Matrix Multiplication for two blocks. HBFP_Systolic_Array --> src --> main --> scala containes the chisel codes for all the modules and submodules. The Systolic_Array.scala is the TOP MODULE.

HBFP_Systolic_Array --> src --> test --> scala contains a python script(HBFP_GEMM.py) to generate random matrices and their multiplication. It also contains the tesbench which uses verilator as backend to accelerate the testing process.

You may go to the location specified in the test bench to access the VCD file and have a look at the waveforms in GTKwave.

There is the verilog file of the Top module right inside the HBFP_Systolic_Array folder. If you need the verilog codes of only the submodules than you may go the the chisel program of it and add a line to emit verilog code and write "sbt run" in the terminal. Kindly note that everything is parametrized so if you want verilog for some other configuration, change the parameters where you are emitting the verilog code in the chisel file.

You may also find a system verilog file along with the VCD file.

For easy access, the following is the location of the VCD file: FP_Systolic_Array --> test --> HbfpPass --> FP.

5. 


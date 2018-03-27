# C_learning

## argc_argv
This is a simple example to show the use of two parameters  which are argc and argv. The argc is used to count the input number when running out file. The argv[] is used to record input arguments.


Here is the process of compileding and runing .cc file on Linux. 
First,compiled the program and generate a default executable file named a.out:

```bash
gcc argc_argv.c
```

Then you run the executable file:

```bash 
./a.out
```

When compiled the program whose name is hello.cpp,you should execute:

```bash
g++ hello.cpp
```
If you want to generate some specified files, you can see [g++ more](https://blog.csdn.net/dengshuai_super/article/details/51766786).For example,generating a specified executable file whose name is hello:

```bash
g++ hello.cpp -o hello
```

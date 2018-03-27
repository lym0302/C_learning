## Static library(archive)

In this example, we first create two object modules(say & sayhello) and then use it to generate a static library(libsay.a).

The following command sequence compiles the source file(sayhello.cpp & say.cpp) into an object file(sayhello.o & say.o) and commands ar to store it in the library(libsay.a):

```bash
g++ -c sayhello.cpp
g++ -c say.cpp
ar -r libsay.a sayhello.o say.o
```

Compile and link:

```bash
g++ saymain.cpp libsay.a -o saymain
```

Run:
```bash
./saymain
```

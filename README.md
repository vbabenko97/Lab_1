# Lab 1

Small C++ example program that demonstrates a `Student` class with basic
data, accessors, mutators, and formatted console output.

## Project structure

- `Main.cpp`: creates a sample `Student` instance and prints its data.
- `Student.hpp`: declares the `Student` class and stream output operator.
- `Student.cpp`: defines the `Student` class behavior.

## Build and run

```bash
g++ -std=c++17 Main.cpp Student.cpp -o main
./main
```

## Output

The program prints the student profile to standard output and then shows the
updated surname after calling a setter.

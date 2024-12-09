# Hack Bug Report: Stack Overflow in Recursive Function

This repository demonstrates a common error in recursive functions written in Hack: stack overflow due to insufficient input validation and lack of a base case to handle negative numbers.

## Bug Description

The `foo` function calculates the factorial of a number using recursion.  However, it lacks a base case to handle negative input, leading to infinite recursion and a stack overflow when called with a large or negative integer. The `bar` function showcases this, and the `main` function demonstrates how it would be used in a program. 

## Bug Reproduction

1. Compile the code using the Hack compiler.
2. Run the compiled code. Observe the stack overflow error.  The error will vary depending on your system and the compiler used. 

## Solution

The solution is to add proper input validation and a base case for negative input numbers. This prevents infinite recursion and the resulting stack overflow.

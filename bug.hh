function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function bar(): int {
  return foo(5);
}

function main(): void {
  echo bar();
}
This code has a potential stack overflow error if the input to the foo function is a large number. This is because the foo function recursively calls itself, and if the recursion is deep enough, it will exceed the stack size limit and the program will crash.  The bug is that there is no base case for negative numbers. 
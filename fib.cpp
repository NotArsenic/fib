#include <cstdio>
#include <cstdint>
#include <iostream>

static uint64_t fib(uint64_t n)
{
  if (n <= 1)
    return n;
  return fib(n - 1) + fib(n - 2);
}

// hello
int main()
{
  printf("%llu \n", fib(47));
}

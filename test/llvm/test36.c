#include <stdio.h>

struct a {
  int x, y;
} z;

struct a g(struct a b)
{
  b.x++;
  return b;
}

void f(void)
{
  z = g(z);
}

int main(int argc, char **argv)
{
  z.x = 22;
  f();
  printf("hello world %d %d\n", z.x, z.y);
  return 0;
}

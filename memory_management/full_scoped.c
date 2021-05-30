#include <stdio.h>
#include <stdlib.h>

void anotherScope(void) {
  int c, a;
  c = 10;
  a = 4;

  printf("%d", a + c)
}

void scoped(void) {
  int a, b;
  a = 5;
  b = 4;

  anotherScope();
  printf("%d", a + b);
}

int main(void) {
  scoped();
  return 0;
}

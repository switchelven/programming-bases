#include <stdio.h>
#include <stdlib.h>

int a

void anotherScope(void) {
  int c;
  c = 10;
  a = 4;

  printf("%d should be 14", a + c)
}

void scoped(void) {
  int b;
  b = 4;

  printf("%d should be 9", a + b);
}

int main(void) {
  a = 5;
  anotherScope();
  scoped();
  return 0;
}

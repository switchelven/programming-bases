#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b) {
  b = a + b; // get sum of A and B
  a = b - a; // A + B - A = B -> A is now B
  b = b - a; // A + B - B = A -> as A is B, and B is A+B, B is now A
  printf("First value is now: %d and second value %d", a, b); // swap done
}

int main(int argc, char *argv[]) {
  int a, b;

  if (argc != 2) { // check that we received 2 arguments
    printf("Swap expect 2 arguments, %d received!", argc)
    return 1 // return 1 cause we received an unexpected number of arguments witch is an error
  }

  a = atoi(argv[0])
  b = atoi(argv[1])

  swap(a, b)

  return 0
}

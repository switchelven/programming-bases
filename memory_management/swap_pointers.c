#include <stdio.h>
#include <stdlib.h>

// This method swap a and b values relying on
// a value computed swap
void swapValue(int *a, int *b) {
  *b = *a + *b;
  *a = *b - *a;
  *b = *b - *a;
}

// This method swap the address of a and b
void swapPointers(int **a, int **b) {
  int *c;
  c = *b;
  *b = *a;
  *a = c;
}

int main(int argc, char *argv[]) {
  int a, b;
  int *pa, *pb;

  if (argc != 3) { // check that we received 2 arguments
    printf("Swap expect 2 arguments, %d received!", argc);
    return 1; // return 1 cause we received an unexpected number of arguments witch is an error
  }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  pa = &a;
  pb = &b;

  swapValue(pa, pb);
  printf("First value is now: %d@%p and second value %d@%p\n", *pa, pa, *pb, pb); // swap done
  swapPointers(&pa, &pb);
  printf("First value is now: %d@%p and second value %d@%p\n", *pa, pa, *pb, pb); // swap done

  return 0;
}

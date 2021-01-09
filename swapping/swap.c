#include <stdio.h>

void swap(int a, int b) {
    b = a + b; // get sum of A and B
    a = b - a; // A + B - A = B -> A is now B
    b = b - a; // A + B - B = A -> as A is B, and B is A+B, B is now A
    printf("First value is now: %d and second value %d", a, b); // swap done
}

int main(void) {
    int a, b; // declare two integer variables

    printf("Enter 2 value: ");
    scanf("%d\n%d", &a, &b); // retrieve value from user entry

    swap(a, b); // run swap metod

    return 0; // return 0 cause all went well :)
}
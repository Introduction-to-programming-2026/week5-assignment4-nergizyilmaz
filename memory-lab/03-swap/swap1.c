#include <stdio.h>

// Swap function — now uses pointers
void swap(int *a, int *b)
{
    int tmp = *a;   // tmp = value at address a
    *a = *b;        // value at address a = value at address b
    *b = tmp;       // value at address b = tmp
}

int main(void)
{
    int x = 1;
    int y = 2;

    printf("Before swap: x = %i, y = %i\n", x, y);

    // Pass the addresses of x and y
    swap(&x, &y);

    printf("After swap: x = %i, y = %i\n", x, y);
}
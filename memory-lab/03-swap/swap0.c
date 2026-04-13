// Fails to swap two integers
//
// Run this. Does x and y actually swap in main?
//
// TODO: Explain below why the swap doesn't work:
// ANSWER: The swap does not work because the function receives copies of x and y,
// not the original variables. This is because C passes arguments by value.
// Therefore, swapping a and b only changes local copies inside the function,
// and does not affect x and y in main.
//
// Hint: When you call swap(x, y), does the function receive x and y
//       themselves, or copies of their values?

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

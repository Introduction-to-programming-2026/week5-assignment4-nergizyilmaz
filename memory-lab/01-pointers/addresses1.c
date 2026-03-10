// Prints an integer's address
// The & operator gives you the memory address of a variable.
// %p is the format specifier for printing addresses (pointers).

#include <stdio.h>

int main(void)
{
    int n = 50;

    // Print the value of n (optional)
    printf("Value of n: %i\n", n);

    // Print the address of n
    printf("Address of n: %p\n", (void*)&n);
}
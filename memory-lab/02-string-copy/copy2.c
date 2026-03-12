// Capitalizes a copy of a string — the RIGHT way

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");

    // Allocate memory for t
    char *t = malloc(strlen(s) + 1);

    // Copy characters
    for (int i = 0; i <= strlen(s); i++)
    {
        t[i] = s[i];
    }

    // Capitalize first letter
    t[0] = toupper(t[0]);

    // Print both
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
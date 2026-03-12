// Capitalizes a copy of a string — the SAFE way

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char *s = get_string("s: ");

    // Check if s is NULL
    if (s == NULL)
    {
        return 1;
    }

    // Allocate memory for t
    char *t = malloc(strlen(s) + 1);

    // Check if malloc failed
    if (t == NULL)
    {
        return 1;
    }

    // Copy s into t
    strcpy(t, s);

    // Capitalize first letter if string not empty
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print both strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free allocated memory
    free(t);

    return 0;
}
// Capitalizes a copy of a string — the RIGHT way

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char s[100];

    printf("s: ");
    scanf("%s", s);

    char *t = malloc(strlen(s) + 1);

    for (int i = 0; i <= strlen(s); i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}
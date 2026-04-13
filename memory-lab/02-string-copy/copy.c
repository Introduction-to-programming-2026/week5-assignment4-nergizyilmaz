
// Capitalizes a string — the WRONG way
//
// Run this. Enter a lowercase word.
// Notice that BOTH s and t get capitalized, even though we only changed t.
//
// TODO: Write a comment below explaining WHY this happens:
// ANSWER: This happens because s and t point to the same memory location.
// The assignment t = s does not create a new copy of the string,
// it only copies the address. Therefore, when we modify t,
// s is also modified.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[] = "hello";
    char *t = s;

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
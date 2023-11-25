#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s, *t;

    s = _strdup("ALX SE");
    t = _strdup("");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    if (t == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", t);
    free(t);
    return (0);
}

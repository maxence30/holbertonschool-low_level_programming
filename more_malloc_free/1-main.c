#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the string_nconcat function
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    /* Concatenate "Best " with first 6 bytes of "School !!!" */
    concat = string_nconcat("Best ", "School !!!", 6);
    if (!concat)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    printf("%s\n", concat);

    free(concat); /* Free the allocated memory */
    return (0);
}

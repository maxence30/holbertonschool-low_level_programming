#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
            printf(" ");
        if (!(i % 10) && i)
            printf("\n");
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the _calloc function
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char)); /* Allocate 98 bytes initialized to 0 */
    if (!a)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    strcpy(a, "Best");             /* Copy "Best" into allocated memory */
    strcpy(a + 4, " School! :)\n");/* Append more text */
    a[97] = '!';                    /* Modify last byte */

    simple_print_buffer(a, 98);    /* Print buffer in hexadecimal */
    free(a);                        /* Free allocated memory */
    return (0);
}

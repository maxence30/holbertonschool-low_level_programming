#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints an array of integers in hexadecimal
 * @buffer: the array to print
 * @size: number of elements
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        if (i != 0)
            printf(" ");
        printf("0x%02x", buffer[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    printf("\n");
}

/**
 * main - test array_range function
 * Return: Always 0
 */
int main(void)
{
    int *a;

    a = array_range(0, 10); /* Create array from 0 to 10 */
    if (!a) /* Check if allocation failed */
        return (1);
    simple_print_buffer(a, 11); /* Print 11 elements */
    free(a);
    return (0);
}

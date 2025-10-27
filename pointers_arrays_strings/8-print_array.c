#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements to print
 *
 * Description: Numbers are separated by comma and space,
 *              printed in the same order as stored in the array.
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

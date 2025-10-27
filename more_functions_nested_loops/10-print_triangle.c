#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 *
 * If size is 0 or less, prints only a newline
 * Uses the character # to print the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');

		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}
}

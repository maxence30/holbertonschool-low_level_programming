#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to print
 *
 * Description: If the number of characters is odd,
 *              prints the last n characters where
 *              n = (length_of_the_string + 1) / 2.
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Find the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine where to start printing */
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	/* Print from start to end */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}

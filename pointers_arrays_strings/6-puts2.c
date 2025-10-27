#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to print
 *
 * Description: Starts with the first character and prints
 *              every other character, followed by a new line.
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

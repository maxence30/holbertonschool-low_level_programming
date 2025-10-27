#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	/* Find the length of the string */
	while (s[j] != '\0')
	{
		j++;
	}

	j--; /* Move to the last valid character */

	/* Swap characters from both ends */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

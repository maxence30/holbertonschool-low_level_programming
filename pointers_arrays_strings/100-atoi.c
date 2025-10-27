#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Description: Converts all characters of a string into an integer.
 *              Handles multiple '+' and '-' signs.
 *              Stops when a non-digit character appears after digits.
 *
 * Return: the integer value, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			num = (num * 10) + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	return (num * sign);
}

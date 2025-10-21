#include <stdio.h>

/**
 * main - affiche les nombres base 16 (hexadécimal) en minuscules suivis d'un saut de ligne
 *
 * Return: 0 (succès)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar(i + '0');          /* 1ère utilisation de putchar */
		else
			putchar(i - 10 + 'a');     /* 2ème utilisation de putchar */
	}

	putchar('\n');                       /* 3ème utilisation de putchar */

	return (0);
}

#include <stdio.h>

/**
 * main - affiche les chiffres de 0 à 9 séparés par ", "
 *
 * Return: 0 (succès)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');      /* 1ère utilisation de putchar */

		if (i != 9)
		{
			putchar(',');      /* 2ème utilisation de putchar */
			putchar(' ');      /* 3ème utilisation de putchar */
		}
	}

	putchar('\n');             /* 4ème utilisation de putchar */

	return (0);
}

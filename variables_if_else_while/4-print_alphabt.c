#include <stdio.h>

/**
 * main - affiche l'alphabet en minuscules sauf 'q' et 'e', suivi d'un saut de ligne
 *
 * Return: 0 (succès)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);   /* 1ère utilisation de putchar */
	}

	putchar('\n');          /* 2ème utilisation de putchar */

	return (0);
}

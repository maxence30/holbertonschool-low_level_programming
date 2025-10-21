#include <stdio.h>

/**
 * main - affiche l'alphabet en minuscules à l'envers suivi d'un saut de ligne
 *
 * Return: 0 (succès)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);        /* 1ère utilisation de putchar */

	putchar('\n');         /* 2ème utilisation de putchar */

	return (0);
}

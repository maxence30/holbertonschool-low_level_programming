#include <stdio.h>

/**
 * main - affiche l'alphabet en minuscules puis majuscules suivi d'un saut de ligne
 *
 * Return: 0 (succès)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);        /* 1ère utilisation de putchar */

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);        /* 2ème utilisation de putchar */

	putchar('\n');         /* 3ème utilisation de putchar */

	return (0);
}

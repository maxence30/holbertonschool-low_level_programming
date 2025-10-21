#include <stdio.h>

/**
 * main - affiche l'alphabet en minuscules suivi d'un saut de ligne
 *
 * Return: 0 (succès)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

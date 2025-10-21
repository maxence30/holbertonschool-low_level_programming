#include <stdio.h>

/**
 * main - affiche les chiffres de 0 à 9 suivi d'un saut de ligne
 *
 * Return: 0 (succès)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - affiche les chiffres de 0 à 9 suivi d'un saut de ligne
 *
 * Return: 0 (succès)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');  /* 1ère utilisation de putchar */

	putchar('\n');         /* 2ème utilisation de putchar */

	return (0);
}

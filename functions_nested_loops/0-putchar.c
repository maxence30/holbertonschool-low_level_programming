#include <stdio.h>

/**
 * main - affiche "_putchar" suivi d'un saut de ligne
 *
 * Return: 0 (succès)
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');

	return (0);
}

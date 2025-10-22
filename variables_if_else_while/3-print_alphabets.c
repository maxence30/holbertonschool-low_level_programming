#include <stdio.h>

/**
 * main - imprime l'alphabet en minuscules sauf e et q
 *
 * Return: 0 (succès)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');
	return (0);
}

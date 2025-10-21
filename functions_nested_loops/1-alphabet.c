#include "main.h"

/**
 * print_alphabet - affiche l'alphabet en minuscules suivi d'un saut de ligne
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);  /* 1er appel à _putchar */

	_putchar('\n');    /* 2ème appel à _putchar */
}

#include "main.h"

/**
 * print_alphabet_x10 - affiche l'alphabet 10 fois en minuscules
 */
void print_alphabet_x10(void)
{
    int i, j;
    char c;

    for (i = 0; i < 10; i++)
    {
        for (c = 'a'; c <= 'z'; c++)
            _putchar(c);    /* 1er appel à _putchar, répété dans la boucle */

        _putchar('\n');      /* 2ème appel à _putchar, saut de ligne */
    }
}

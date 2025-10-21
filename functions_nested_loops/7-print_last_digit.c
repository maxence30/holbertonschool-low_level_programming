#include "main.h"

/**
 * print_last_digit - affiche le dernier chiffre d'un nombre
 * @n: le nombre dont on veut le dernier chiffre
 *
 * Return: la valeur du dernier chiffre
 */
int print_last_digit(int n)
{
    int last;

    if (n < 0)
        n = -n;
    last = n % 10;
    _putchar('0' + last);

    return (last);
}

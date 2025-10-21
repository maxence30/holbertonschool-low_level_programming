#include "main.h"

/**
 * _isalpha - vérifie si un caractère est alphabétique
 * @c: le caractère à vérifier
 *
 * Return: 1 si lettre (a-z ou A-Z), 0 sinon
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

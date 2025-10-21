#include "main.h"

/**
 * times_table - affiche la table de multiplication de 9 (de 0 à 9)
 */
void times_table(void)
{
    int i, j, prod;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            prod = i * j;

            if (j == 0)
            {
                _putchar('0' + prod); // Premier nombre, sans espace devant
            }
            else
            {
                _putchar(','); // séparateur
                _putchar(' ');

                // Affichage avec alignement pour que ça colle avec l'exemple
                if (prod < 10)
                {
                    _putchar(' ');
                    _putchar('0' + prod);
                }
                else
                {
                    _putchar('0' + prod / 10);
                    _putchar('0' + prod % 10);
                }
            }
        }
        _putchar('\n'); // Nouvelle ligne après chaque ligne de la table
    }
}

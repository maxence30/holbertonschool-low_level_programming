#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head;          /* garder l’adresse du nœud courant */
        head = head->next;    /* avancer au nœud suivant */
        free(temp->str);      /* libérer la chaîne du nœud */
        free(temp);           /* libérer le nœud */
    }
}

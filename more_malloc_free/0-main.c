#include "main.h"
#include <stdio.h>

/**
 * main - test malloc_checked
 *
 * Return: 0
 */
int main(void)
{
    void *ptr;

    ptr = malloc_checked(10);
    printf("%p\n", ptr);
    free(ptr);

    return 0;
}

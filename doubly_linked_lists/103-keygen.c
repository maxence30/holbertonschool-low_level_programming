#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - keygen for crackme5
 * @argc: number of args
 * @argv: args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    unsigned int i, len;
    unsigned long ch;
    char *username;
    char keygen[7];
    unsigned int add, mult;
    const char lookup[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/.";

    if (argc != 2)
    {
        printf("Usage: %s username\n", argv[0]);
        return (1);
    }

    username = argv[1];
    len = strlen(username);

    /* keygen[0] */
    keygen[0] = (len ^ 59) & 63;

    /* keygen[1] */
    add = 0;
    for (i = 0; i < len; i++)
        add += (unsigned char)username[i];
    keygen[1] = (add ^ 79) & 63;

    /* keygen[2] */
    mult = 1;
    for (i = 0; i < len; i++)
        mult *= (unsigned char)username[i];
    keygen[2] = (mult ^ 85) & 63;

    /* keygen[3] */
    ch = (unsigned char)username[0];
    for (i = 0; i < len; i++)
        if ((unsigned long)(unsigned char)username[i] > ch)
            ch = (unsigned long)(unsigned char)username[i];
    srand(ch ^ 14);
    keygen[3] = rand() & 63;

    /* keygen[4] */
    ch = 0;
    for (i = 0; i < len; i++)
        ch += ((unsigned char)username[i] * (unsigned char)username[i]);
    keygen[4] = (ch ^ 239) & 63;

    /* keygen[5] */
    for (i = 0; i < (unsigned char)username[0]; i++)
        srand(rand());
    keygen[5] = (rand() ^ 229) & 63;

    keygen[6] = '\0';

    /* convert to final characters using lookup table */
    for (i = 0; i < 6; i++)
        keygen[i] = lookup[(unsigned char)keygen[i]];

    printf("%s", keygen);

    return (0);
}

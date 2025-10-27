#ifndef MAIN_H
#define MAIN_H

/**
 * _strcat - concatenates the string pointed to by src
 *           to the end of the string pointed to by dest
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates at most n bytes of src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: maximum number of bytes to concatenate from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n);

/* Prototype for _putchar */
int _putchar(char c);

#endif /* MAIN_H */

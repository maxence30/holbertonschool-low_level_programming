#include <stdio.h>

/**
 * premain - prints a message before main is executed
 * 
 * Return: void
 */
void premain(void) __attribute__ ((constructor));

void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

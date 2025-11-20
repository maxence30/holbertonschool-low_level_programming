#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str;
	char *sep = "";

	if (!format) /* IF #1 */
	{
		printf("\n");
		return;
	}

	va_start(ap, format);

	while (format[i]) /* WHILE #1 */
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s%d", sep, va_arg(ap, int));
			sep = ", ";
			break;
		case 'f':
			printf("%s%f", sep, (float)va_arg(ap, double));
			sep = ", ";
			break;
		case 's':
			str = va_arg(ap, char *);
			if (!str) /* IF #2 */
				str = "(nil)";
			printf("%s%s", sep, str);
			sep = ", ";
			break;
		default:
			break;
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}

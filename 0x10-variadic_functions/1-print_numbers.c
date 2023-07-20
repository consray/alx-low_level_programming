#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a newline
 * @separator: string to be printed between numbers
 * @n: the number of interger passed to functions
 * @...: variable number of number to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && separator != NULL)
			print("%s", separator);
	}
	printf("\n");
	va_end(args);
}

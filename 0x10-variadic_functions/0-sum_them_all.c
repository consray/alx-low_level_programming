#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters to be passed
 * @...: A variable number of params to calculate the sum
 * Return: If n == 0 - 0
 * Otherwise - sum of all params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;

	va_start(args, n);
	for (int i = 0; i < n; i++)
	{
		if (n > 0)
			sum += va_arg(args, int);
		else 
			return (0);
	}
	va_end(args);
	return (sum);
}

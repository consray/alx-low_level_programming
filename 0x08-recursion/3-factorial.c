#include "main.h"

/**
 * factorial - returns factorials of a given number
 * @n: - input value
 * Return: Factorial of number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

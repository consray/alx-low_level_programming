#include "main.h"

/**
 * _isdigit - checks if numbers are 0 to 9
 * @c: is the digit to be checked
 * Returns: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isupper - check for uppercase characters
 * @c: is the character to be checked
 * Returns: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

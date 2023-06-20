#include "main.h"

/**
 * _islower - checks whether a character is of lowercase
 *@c: is the character to be checked
 * Return: Always 1 (Success) or 0 (Failure)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

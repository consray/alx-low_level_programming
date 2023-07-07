#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character to stdout
 *
 * Return: 1 on Success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

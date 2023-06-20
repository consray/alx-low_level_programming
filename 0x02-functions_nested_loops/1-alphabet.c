#include "main.h"

/**
 * print_alphabet - print all alphabets lettes in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}

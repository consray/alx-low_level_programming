#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate two strings
 * @s1: input 1 to concatenate
 * @s2: inut 2 to concatenate
 * Return: concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cont;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0;
	b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	cont = malloc(sizeof(char) * (a + b + 1));
	if (cont == NULL)
		return (NULL);
	a = 0;
	b = 0;
	while (s1[a] != '\0')
	{
		cont[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		cont[a] = s2[b];
		a++, b++;
	}
	cont[a] = '\0';
	return (cont);
}


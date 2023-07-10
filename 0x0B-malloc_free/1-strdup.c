#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to a new memory location
 * @str: char
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * i + i);
	if (s == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		s[r] = str[r];
	return (s);
}

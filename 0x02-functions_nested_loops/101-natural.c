#include <stdio.h>

/**
 * main - list all numbers below 1024(excluded)
 * tha are multiples of 3 or 5
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
		printf("%d\n", sum);
	}
	return (0);
}

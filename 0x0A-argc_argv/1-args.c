#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv;
	prinf("%d\n", argc - 1);
	return (0);
}

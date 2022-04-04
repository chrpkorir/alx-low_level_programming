#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the progrma
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

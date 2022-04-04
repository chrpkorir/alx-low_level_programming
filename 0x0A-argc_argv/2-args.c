#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives,
 * including the first one
 * @argc: number of arguments
 * @argv: array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int counter;
	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);

	return (0);
}

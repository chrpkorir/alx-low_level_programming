#include <stdio.h>

/**
 * main - Prints the alphabet in lower case and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* print lowercase letters */
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	/* print uppercase letters */
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

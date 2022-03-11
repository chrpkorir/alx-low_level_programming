#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* print uppercase letters */
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	/* print lowercase letters */
	for (ch= 'a'; ch<= 'z'; ch++)
		putchar(ch);

	putchar ('\n') ;
	
	return (0);	
}

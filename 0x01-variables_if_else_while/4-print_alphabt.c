/*
 * File: 4-print_alphabt.c
 * Auth:Chepkorir Faith
 */
#include <stdio.h>

/**
 * main - Prints the alphabet in lower case except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name of a function
 * @f: pointer
 * @name: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}

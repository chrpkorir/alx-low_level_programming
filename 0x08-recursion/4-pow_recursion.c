#include "main.h"

/**
 * _pow_recursion - returns value 0f x raised to
 * the power of y
 * @x: base integer
 * @y:integer to be raised to
 * Return: -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

#include "main.h"

/**
 * _pow_recursion - Returns value of x raised to power of y
 * @x: Given number
 * @y: Given power
 * Return: An integer value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

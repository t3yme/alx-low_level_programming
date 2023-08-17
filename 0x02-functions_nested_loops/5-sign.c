#include "main.h"
/* more headers goes there */

/**
 * print_sign - Defines the function to print the sign of a number
 * @n: parameter provided for testing
 * Return: evaluates to integer on success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}

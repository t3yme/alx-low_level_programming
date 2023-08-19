#include "main.h"
/* more headers goes there */

/**
 * print_numbers - Defines a function to print number from 0 to 9
 * Return: evaluates to integer on success
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; 1++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

#include "main.h"
/* more headers goes there */

/**
 * print_line - draws a straight line in the terminal
 * @n: parameter provided for testing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

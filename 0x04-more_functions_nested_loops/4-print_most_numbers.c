#include "main.h"
/* more headers goes there */

/**
 * print_most_numbers- Defines a function to print number 0 to 9 except 2,4
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		_putchar(i);
	}
	_putchar('\n');
}

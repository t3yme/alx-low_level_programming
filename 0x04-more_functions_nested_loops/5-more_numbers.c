#include "main.h"
/* more headers goes there */

/**
 * print_numbers - prints number from 0 to 14, ten times
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = '0'; i < '15'; i++)
		{
			if (i > '9')
				_putchar('1');
			_putchar(i);
		}
	_putchar('\n');
	}
}

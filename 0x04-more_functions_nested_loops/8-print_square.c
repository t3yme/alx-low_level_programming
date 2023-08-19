#include "main.h"
/* more headers goes there */

/**
 * print_square - prints a square, followed by a new line
 * @size: parameter provided for testing
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}

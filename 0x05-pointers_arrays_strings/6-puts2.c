#include "main.h"
/* more headers goes there */

/**
 * puts2 - prints every other character of a string
 * @str: parameter provided for testing
 * Return: evaluates to integer on success
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}

	_putchar('\n');
}

#include "main.h"
#include "2-strlen.c"
/* more headers goes there */

/**
 * puts_half -  prints half of a string
 * @str: parameter provided for testing
 * Return: evaluates to integer on success
 */

void puts_half(char *str)
{
	int i;

	i = _strlen(str) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

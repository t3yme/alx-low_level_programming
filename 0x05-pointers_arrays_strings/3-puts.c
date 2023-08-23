#include "main.h"
/* more headers goes there */

/**
 * _puts - prints a string, new line, to stdout
 * @str: parameter provided for testing
 * Return: evaluates to integer on success
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

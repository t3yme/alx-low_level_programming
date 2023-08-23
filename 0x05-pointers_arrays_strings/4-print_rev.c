#include "main.h"
#include "2-strlen.c"
/* more headers goes there */

/**
 * print_rev - prints a string in reverse
 * @s: parameter provided for testing
 * Return: evaluates to integer on success
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

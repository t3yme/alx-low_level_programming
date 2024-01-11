#include "main.h"

/**
 * void _print_rev_recursion - Prints string in reverse
 * @s: Given string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

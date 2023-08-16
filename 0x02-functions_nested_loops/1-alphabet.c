#include "main.h"
/* more headers goes there */

/**
 * print_alphabet - Defines the funtion to print to stdout
 * Return: evaluates to integer on success
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}

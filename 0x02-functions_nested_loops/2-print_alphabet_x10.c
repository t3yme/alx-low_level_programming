#include "main.h"
/* more headers goes there */

/**
 * print_alphabetx10 - Defines the function to print a to z, 10times to stdout
 * Return: evaluates to integer on success
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}

	_putchar('\n');
}

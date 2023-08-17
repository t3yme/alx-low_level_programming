#include "main.h"
/* more headers goes there */

/**
 * print_last_digit - Defines the function to print the last digit of a number
 * @n: parameter provided for testing
 * Return: evaluates to integer on success
 */

int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}

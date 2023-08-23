#include "main.h"
/* more headers goes there */

/**
 * swap_int - swaps the values of two integers
 * @a: parameter provided for testing
 * @b: second parameter provided for testing
 * Return: evaluates to integer on success
 */

void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}

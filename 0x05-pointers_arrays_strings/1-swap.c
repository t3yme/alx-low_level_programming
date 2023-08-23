#include "main.h"
/* more headers goes there */

/**
 r reset_to_98 - a function that resets a pointer value to 98
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

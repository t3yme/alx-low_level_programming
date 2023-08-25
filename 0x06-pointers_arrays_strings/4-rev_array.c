#include "main.h"
/* more headers goes there */

/**
 * reverse_array - reverses the content of array of ints
 * @a: parameter provided for testing
 * @n: second parameter provided for testing
 * Return: evaluates to integer on success
 */

void reverse_array(int *a, int n)
{
	int i;
	int initial;

	for (i = 0; i < n / 2; i++)
	{
		initial = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = initial;
	}
}

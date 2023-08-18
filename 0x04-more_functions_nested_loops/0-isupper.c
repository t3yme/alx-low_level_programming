#include "main.h"
/* more headers goes there */

/**
 * _islower - Defines the function to determine a lower case letter
 * @c: parameter provided for testing
 * Return: evaluates to integer on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

#include "main.h"
/* more headers goes there */

/**
 * _isdigit - Defines the function to determine a lower case letter
 * @c: parameter provided for testing
 * Return: evaluates to integer on success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

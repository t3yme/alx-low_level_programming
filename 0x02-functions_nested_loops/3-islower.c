#include "main.h"
/* more headers goes there */

/**
 * _islower - Defines the function to determine a lower case letter
 * Return: evaluates to integer on success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

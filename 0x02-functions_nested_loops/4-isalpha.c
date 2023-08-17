#include "main.h"
/* more headers goes there */

/**
 * _isalpha - Defines the function to check for alphabetic character.
 * @c: parameter provided for testing
 * Return: evaluates to integer on success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

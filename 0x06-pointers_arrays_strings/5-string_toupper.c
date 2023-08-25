#include "main.h"
/* more headers goes there */

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: parameter provided for testing
 * Return: evaluates to integer on success
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	}

	return (c);
}

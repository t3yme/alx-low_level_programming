#include "main.h"
/* more headers goes there */

/**
 * _strlen - returns the length of a string
 * @s: parameter provided for testing
 * Return: evaluates to integer on success
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}

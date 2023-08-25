#include "main.h"
/* more headers goes there */

/**
 * _strcmp - compares two strings.
 * @s1: parameter provided for testing
 * @s2: second parameter provided for testing
 * Return: evaluates to integer on success
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int count = 0;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
		count++;

	return (s1[i] - s2[i]);
}

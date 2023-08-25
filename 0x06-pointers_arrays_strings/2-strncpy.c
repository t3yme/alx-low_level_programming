#include "main.h"
/* more headers goes there */

/**
 * *_strncpy - copies a string
 * @dest: parameter provided for testing
 * @src: second parameter provided for testing
 * @n: third parameter provided for testing
 * Return: evaluates to integer on success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

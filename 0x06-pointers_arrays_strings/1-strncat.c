#include "main.h"
/* more headers goes there */

/**
 * *_strncat - appends the src string to the dest string
 * @dest: parameter provided for testing
 * @src: second parameter provided for testing
 * @n: third parameter provided for testing
 * Return: evaluates to integer on success
 * for (i = 0; (i < n && src[i] != '\0'); i++)
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;
	int j = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		d++;

	for (i = 1; dest[i] != '\0'; i++)
		s++;

	for (i = d; (i < s && i < n); i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

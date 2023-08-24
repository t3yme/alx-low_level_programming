#include "main.h"
/* more headers goes there */

/**
 * *_strcat - appends the src string to the dest string
 * @dest: parameter provided for testing
 * @src: second parameter provided for testing
 * Return: evaluates to integer on success
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;
	int j = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		d++;

	for (i = 1; dest[i] != '\0'; i++)
		s++;

	for (i = d - 1; (i < d + s); i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}

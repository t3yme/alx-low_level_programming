#include "main.h"
#include <string.h>
/* more headers goes there */

/**
 * *_strcat - appends the src string to the dest string
 * @dest: parameter provided for testing
 * @src: second parameter provided for testing
 * Return: evaluates to integer on success
 */

char *_strcat(char *dest, char *src)
{
	int d = strlen(dest);
	int s = strlen(src);
	int j = 0;
	int i;

	for (i = d - 1; (i < d + s - 1); i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}

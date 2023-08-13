#include <stdio.h>
/* more headers goes there */

/**
 * main - The entry point for the programme
 * Return: Main evaluates to zero
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

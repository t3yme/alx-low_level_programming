#include <stdio.h>
/* more headers goes there */

/**
 * main - The entry point for the programme
 * Return: Main evaluates to zero
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	putchar('\n');
	return (0);
}

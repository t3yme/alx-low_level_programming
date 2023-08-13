#include <stdio.h>
/* more headers goes there */

/**
 * main - The entry point for the programme
 * Return: Main evaluates to zero
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a < b)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a == 8)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

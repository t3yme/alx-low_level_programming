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
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (a < b && b < c)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if (a == 7)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

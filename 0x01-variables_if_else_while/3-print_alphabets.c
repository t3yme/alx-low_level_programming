#include <stdio.h>
/* more headers goes there */

/**
 * main - The entry point for the programme
 * Return: Main evaluates to zero
 */
int main(void)
{
	char lowAlphabet;
	char upperAlphabet;

	for (lowAlphabet = 'a'; lowAlphabet <= 'z'; lowAlphabet++)
		putchar(lowAlphabet);
	for (upperAlphabet = 'A'; upperAlphabet <= 'Z'; upperAlphabet++)
		putchar(upperAlphabet);
	putchar('\n');
	return (0);
}

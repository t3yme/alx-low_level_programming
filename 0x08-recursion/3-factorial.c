#include "main.h"

/**
 * factorial - Returns factorial of a number*
 * @n: Given number
 * Return: An integer value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

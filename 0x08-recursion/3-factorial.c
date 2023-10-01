#include "main.h"

/**
 * factorial - check the code
 *
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

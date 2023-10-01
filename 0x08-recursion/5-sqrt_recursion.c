#include "main.h"
/**
 * _sqrt_recursion- check the code
 *
 *@n: ogjij
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	if (i * i < n)
	{
		i++;
		i += _sqrt_recursion(n);
	}
	i--;
	if (i * i != n)
		return (-1);
	return (i);
}

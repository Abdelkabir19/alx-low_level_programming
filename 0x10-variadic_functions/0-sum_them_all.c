#include "variadic_fonctions.h"

/**
*sum_them_all - lknihiu
*@n: the number of argument
*@...: the integers to sum
*
*Return: the int sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int s = 0, i = n;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	while (i--)
		s += va-arg(ptr, int);
	va_end(ptr);
	return (s);
}

#include "variadic_functions.h"
/**
*print_numbers -  prints numbers, followed by a new line.
*@separator:  is the string to be printed between numbers
*@n: is the number of integers passed to the function
*@...: the number will printed
*
*Return: ¿¿¿
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
		printf("%d%s", va_arg(ptr, int), i ? (separator ? separator : "") : "\n");
	va_end(ptr);
}


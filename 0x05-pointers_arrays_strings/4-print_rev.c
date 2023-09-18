#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len, i;
	char e;

	len = _strlen(s);
	for (i = len; i > 0; i--)
	{
		e = *s - len;
		putchar('e');
	}
}

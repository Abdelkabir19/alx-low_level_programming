#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (*s != '\n')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}

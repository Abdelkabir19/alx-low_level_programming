#include "main.h"
/**
*print_to_98 - kdjgierj
*
*@n: iohjtj
*Return: jiotrj
*/
void print_to_98(int n)
{
	int i, r;

	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');_putchar(i % 10 + '0');
			else if (i >= 0)
				_putchar(i + '0');
			else if (i > -10)
				r = i * -1;_putchar('-');_putchar(r + '0');
			else if (i > -100)
				r = i * -1;_putchar('-');_putchar(r / 10 + '0');_putchar(r % 10 + '0');
			else
				r = i * -1;_putchar('-');_putchar(r / 100 + '0');_putchar((r / 10) % 10 + '0');_putchar(r % 10 + '0');
			if (i != 98)
				_putchar(',');_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			if (i < 100)
				_putchar(i / 10 + '0');_putchar(i % 10 + '0');
			else
				_putchar(i / 100 + '0');_putchar((i / 10) % 10 + '0');_putchar(i % 10 + '0');
			if (i != 98)
				_putchar(',');_putchar(' ');
		}
	}
	_putchar('\n')
}

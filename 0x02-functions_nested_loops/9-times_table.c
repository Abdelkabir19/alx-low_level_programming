#include "main.h"
/**
*times_table - jhgehihg
*
*return: jdfhbuiehh
*/
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			if (i * j < 10)
				_putchar(r + '0');
			else
			{
				_putchar(r / 10 + '0');
				_puchar(r % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('\n');
		}
	}
}

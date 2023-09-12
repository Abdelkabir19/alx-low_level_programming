#include <stdio.h>
/**
*main - iofjiurh
*
*Return: iojhitrj
*/
int main(void)
{
	int i, j, k, l;
	int m = '1'

	for (i = '0'; i < '9' + 1; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			for (k = i; k < '9' + 1; k++)
			{
				for (l = m; l < '9' + 1; l++)
				{
					m = '0'
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if ((i != '9') | (j != '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

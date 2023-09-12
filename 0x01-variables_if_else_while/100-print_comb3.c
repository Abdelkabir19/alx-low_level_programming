#include <stdio.h>
/**
*main - iuhfiuhiuwh
*
*Return: hfiuwe
*/
int main(void)
{
	int i, j;

	for (i = '0' ; i < '9'; i++)
	{
		for (j = i + 1; j < '9' + 1; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

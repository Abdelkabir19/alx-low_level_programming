#include <stdio.h>
/**
*main - fkkrir
*
*Return: fhujt
*/
int main(void)
{
	int i;

	for ( i = '0' ; i < '9' + 1; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

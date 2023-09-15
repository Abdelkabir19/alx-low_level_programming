#include <stdio.h>
/**
*main - fdijif
*
*Return: jj
*/
int main(void)
{
	int i, k = 0;

	for (i = 1; i < 342; i++)
	{
		if (i % 5 != 0)
		{
			k += i * 3;
			while (5 * i < 1024)
				k += i * 5;
		}
		else
			k += i * 5;
	}
	printf("%d\n", k);
}

#include <stdio.h>
/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long long int k, i, a = 0, s = 0, n = 1;

	for (i = 0; i < 98; i++)
	{
		if (i > 90)
		{
			a += s % 100 + n % 100;
			s /= 100;
			n /= 100;
			k = s + n;
			s = n;
			n = k;
			k += a / 100;
			a %= 100;
			if (i != 97)
				printf("%llu%llu, ", k, a);
			else
				printf("%llu%llu\n", k, a);
		} else
		{
			k = s + n;
			s = n;
			n = k;
			if (i != 97)
				printf ("%llu, ", k);
		}
	}
	return (0);
	
}

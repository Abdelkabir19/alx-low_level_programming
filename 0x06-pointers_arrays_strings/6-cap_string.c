#include "main.h"
/**
 * cap_string - check the code
 *
 *
 *@a: gioje
 * Return: Always 0.
 */
char *cap_string(char *a)
{
	int n = 0;

	while (*a != '\0')
	{
		if (*a == '\t')
			*a = ' ';
		if (*a == ' ' || *a == '\n' || *a == ',' || *a == '.' || *a == ';' || *a == '!' || *a == '?' || *a == '"' || *a == '(' || *a == ')' || *a == '{' || *a == '}')
		{
			a++;
			if (*a <= 'z' && *a >= 'a')
			{
				*a += 'A' - 'a';
				n++;
			}
			else
				a--;
		}
		a++;
		n++;
	}
	while (n > 0)
	{
		a--;
		n--;
	}
	return (a);
}

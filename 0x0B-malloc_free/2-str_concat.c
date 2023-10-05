#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - check the code for ALX School students.
 *
 *@s1: koemgmtm
 *@s2: klmmr
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, r = 0, j = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[r] != '\0')
			r++;
	}
	s = malloc(sizeof(char) * (r + i + 1));
	free(s);
	for (j = 0; j < i; j++)
		s[j] = s1[j];
	for (j = 0; j < r; j++)
		s[i + j] = s2[j];
	return (s);
}

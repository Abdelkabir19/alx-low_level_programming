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

	while (s1[i] != '\0');
		i++;
	while (s2[r] != '\0')
		r++;
	s = malloc(sizeof(char) * (r + i + 1));
	for (j = 0; s1[j]; j++)
		s[j] = s1[j];
	for (j = 0; s1[j]; j++)
		s[i + j] = s1[j];
}

#include "main.h"
#include <stdio.h>

/**
 * wildcmp - jnjdfskjhg
 *@s1: klnmmklkj
 *@s2:nkjkjkj
 * Return: Always 0.
 */
int i = 1;
int wildcmp(char *s1, char *s2)
{

	while(*s2 != '*' && *s1 != '\0')
	{
		if(*s1 != *s2)
			return(0);
		s1 += i;
		s2 += i;;
	}
	if(*s1 == '\0' && *s2 == '\0')
		return(1);
	while(*s2 == '*')
		s2++;
	if(*s2 == '\0')
		return(1);
	while(*s2 != '\0' && *s2 != '*')
		s2++;
	s2--;
	while(*s1 != '\0')
		s1++;
	s1--;
	while(*s2 != *s1)
		s1--;
	if(*s1 == *s2){
		i = -1;
		return(wildcmp(s1,s2));
	}else
		return(0);
}

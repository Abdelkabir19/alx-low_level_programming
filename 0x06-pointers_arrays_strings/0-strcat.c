#include "main.h"

/**
 *#include "main.h"
 * _strcat - check the code
 *
 *@dest: kohkotk
 *@src: kljhrj
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

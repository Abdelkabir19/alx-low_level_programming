#include "main.h"
/**
 * is_palindrome - check the code
 *
 *@s: jgjr
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return(ak(s, 1, 0));
}
/**
  * ak - jghjgj
  *
  *@s: lkñlk
  *@n: klmfklgjre
  *@i: kljlriej
  *Return: klhjtjh
  */
int ak(char *s, int i, int n)
{
	if (*s != '\0' && i == 1)
		ak(s + 1, i, n + 1);
	else if (s[i - 1] == s[n - i] && i - 1 <= n / 2)
		ak(s, i + 1, n);
	if (i = n / 2)
		return (1);
	else
		return (0);
}

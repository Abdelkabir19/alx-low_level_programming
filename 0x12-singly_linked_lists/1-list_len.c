#include "lists.h"

/**
 *list_len - check the code
 *@h: list
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

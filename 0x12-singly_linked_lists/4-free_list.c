#include "lists.h"

/**
 *free_list- check the code
 *@head: head list
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *leng;

	while ((leng = head))
	{
		head = head->next;
		free(leng->str);
		free(leng);
	}
}

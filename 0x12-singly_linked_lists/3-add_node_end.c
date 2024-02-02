#include "lists.h"
/**
  *add_node_end - check the code
  *@head: first nodes
  *@str: new nodes
  * Return: Always 0.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *string, *leng;
	int len;

	string = malloc(sizeof(list_t));
	if (!string)
		return (NULL);
	string->str = strdup(str);
	for (len = 0; str[len]; len++)
		;
	string->len = len;
	string->next = NULL;
	leng = *head;
	if (leng == NULL)
		*head = string;
	else
	{
		while (leng->next)
			leng = leng->next;
		leng->next = string;
	}
	return (*head);
}

#include "lists.h"

/**
  *add_nodeint_end - a function that adds a new node
  *@head: knjniutr
  *@n: ionijbiutr
  *
  *Return: lmknit
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *curnt;

	if (!new)
		return (NULL);
	if (!*head)
		*head = new;
	else
	{
		curnt = *head;
		while (curnt->next)
			curnt = curnt->next;
		curnt->next = new;
	}
	new->next = NULL;
	new->n = n;
	return (new);
}

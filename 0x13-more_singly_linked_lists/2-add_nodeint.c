#include "lists.h"

/**
  *add_nodeint - a function that adds a new node at the beginning
  *
  *@head: kjvnjrhg
  *@n: nbkjnthnrt
  *
  *Return: nkjnjniuhre
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
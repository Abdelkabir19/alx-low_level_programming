#include "lists.h"

/**
  *free_listint - lmjnijntrrt
  *
  *@head: omkokmth
  *
  *Return: lkmjnijt
  */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

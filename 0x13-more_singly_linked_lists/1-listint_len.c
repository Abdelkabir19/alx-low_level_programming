#include "lists.h"

/**
  *listint_len - a function that returns the number of element
  *@h: head of list
  *
  *Return: knhhtr
  */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

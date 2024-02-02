#include "lists.h"

/**
 *add_node - check the code
 *@head: first nodes
 *@str: new nodes
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *string;
	int i = 0;

	string = malloc(sizeof(list_t));
	if (!string)
		return (NULL);
	while (str[i])
		i++;
	string->len = i;
	string->str = strdup(str);
	string->next = *head;
	*head = string;
	return (string);
}

#include "lists.h"
#include <string.h>
/**
 * add_node_end - Function
 * @head: list_t pointer
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *list;
	unsigned int n = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[n])
		n++;

	new_node->len = n;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		list = *head;
		while (list->next)
			list = list->next;
		list->next = new_node;
	}
	return (new_node);
}

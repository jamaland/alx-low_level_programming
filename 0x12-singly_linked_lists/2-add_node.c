#include "lists.h"
#include <string.h>

/**
 * add_node - Function 
 * @head: list_t pointer the head struct
 * @str: string
 * Return: head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	int len = 0;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);

	while (str[length])
		length++;

	list->len = length;
	list->str = strdup(str);
	list->next = *head;
	*head = list;
	return (list);
}

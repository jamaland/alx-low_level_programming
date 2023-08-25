#include "lists.h"

/**
 * free_list - Function
 * @head: head of list
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *list;

	list = head;
	while (head)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}
	free(head);
}

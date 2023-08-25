#include <stdio.h>
#include "lists.h"
/**
 * print_list - Function
 * @h: constant pointer to a list_t
 * Return: Nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nds = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nds++;
	}
	return (nds);
}

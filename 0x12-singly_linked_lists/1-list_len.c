#include <stdio.h>
#include "lists.h"

/**
 * list_len - Function
 * @h: linkedList
 * Return: Nodes type size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nds = 0;

	while (h)
	{
		nds++;
		h = h->next;
	}
	return (nds);
}

#ifndef H_LISTS
#define H_LISTS
#include <stdlib.h>
/**
 * struct list_s - LinkedList
 * @str: string
 * @len: string length
 * @next: next node
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
void free_list(list_t *head);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
#endif

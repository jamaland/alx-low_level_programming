#ifndef H_LISTS
#define H_LISTS
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
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif

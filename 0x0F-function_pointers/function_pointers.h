#ifndef F_POINTER
#define F_POINTER
void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif

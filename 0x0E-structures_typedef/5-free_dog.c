#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_dog - Free entity dog
 * Description: 'This program frr a entity dog'
 * @d: Pointer of entity dog
 * Return: Always Void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}

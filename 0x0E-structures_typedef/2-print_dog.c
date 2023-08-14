#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Print entity dog
 * Description: 'This program print a entity dog'
 * @d: Pointer of entity dog
 * Return: Always Void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	else if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name:%s\nAge:%0.6f\nOwner%s\n", d->name, d->age, d->owner);
}

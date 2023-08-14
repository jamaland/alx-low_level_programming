#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - Init entity dog
 * Description: 'This program initialize a entity dog'
 * @d: Pointer of entity dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 * Return: Always Void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

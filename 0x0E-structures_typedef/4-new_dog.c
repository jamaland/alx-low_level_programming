#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - Return entity new dog
 * Description: 'This program create entity dog'
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NUll or dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_, *owner_;
	int i, n_name = 0, n_owner = 0;

	if (name == NULL)
	{
		return (NULL);
	}
	if (owner == NULL)
	{
		return (NULL);
	}
	while (name[n_name])
		n_name++;
	while (owner[n_owner])
		n_owner++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_ = malloc(n_name);
	if (name_ == NULL)
		return (NULL);
	for (i = 0; i < n_name; i++)
		name_[i] = name[i];
	name_[i] = '\0';

	owner_ = malloc(n_owner);
	if (owner_ == NULL)
		return (NULL);
	for (i = 0; i < n_owner; i++)
		owner_[i] = owner[i];
	owner_[i] = '\0';

	dog->name = name_;
	dog->age = age;
	dog->owner = owner_;
	return (dog);
}

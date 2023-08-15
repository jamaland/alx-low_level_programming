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
	int i, n_name = 0, n_owner = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	while (name[n_name])
		n_name++;
	while (owner[n_owner])
		n_owner++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(n_name + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name[i]; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->owner = malloc(n_owner + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner[i]; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);
}

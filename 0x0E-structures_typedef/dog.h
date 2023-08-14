#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: struct and attribute of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);
#endif /*DOG_H*/

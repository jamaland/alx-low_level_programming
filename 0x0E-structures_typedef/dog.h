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
typedef struct dog dog_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
#endif /*DOG_H*/

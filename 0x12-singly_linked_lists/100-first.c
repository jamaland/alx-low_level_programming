#include <stdio.h>
#include <stdlib.h>
/* Constructors */
void main_cons(void) __attribute__((constructor));
/**
 * main_cons - Constructor of function
 * Return: Nothing
 */
void main_cons(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

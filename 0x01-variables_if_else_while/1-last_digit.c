#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's verify a number type'
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last == 0)
		printf("Last digit of %d is 0 and is 0", n);
	else if (5 < last)
		printf("Last digit of %d is %d and is greater than 5", n, last);
	else if (6 >  last)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	return (0);
}

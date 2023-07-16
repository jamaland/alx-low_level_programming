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
	int n, first, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	first = n;
	last = n % 10;
	while (first >= 10)
	{
		first = first / 10;
	}
	if (last == 0)
		printf("Last digit of %d is 0 and is 0", n);
	else if (first < last)
		printf("Last digit of %d is %d and is greater than %d", n, last, first);
	else if (first > last)
		printf("Last digit of %d is %d and is less than %d and not 0", n, last, first);
	return (0);
}

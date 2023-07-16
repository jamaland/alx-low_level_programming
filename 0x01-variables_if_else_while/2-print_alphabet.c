#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's verify a number type'
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alpha[]="abcdefghijklmnopqrstuvwxyz";
	int i=0;

	while (i < 26){
		putchar(alpha[i]);
		i++;
	}
	return (0);
}

#include "_putchar.c"
/**
 * main - Entry point
 * Description: 'this is a c program'
 * Return: Always 0 (Success)
*/
int main(void){
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}

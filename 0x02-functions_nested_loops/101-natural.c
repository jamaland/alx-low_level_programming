#include <stdio.h>
/**
 * main - takes a date and prints how many days are
 * Description: function to verify a date
 * Return: (0)
 */

int main(void)
{
	int month = 02, day = 60, year = 1991, i;

	if (year % 4 == 0 && (year % 400 == 0 || !(year % 100 == 0)))
	{
		if (month == 2 && day > 60)
		{
			for (i = 0; i < 5; i++)
				printf("___\n");
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
	}
	else
	{
		if (month == 2 && day >= 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
	return (0);
}

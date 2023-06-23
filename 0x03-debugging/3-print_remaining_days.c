#include <stdio.h>
#include "main.h"

/**
 *main - takes a date and prints how many days are left in the year, taking
 *leap years into account
 *Return: 0
 */

int main(void)
{
	int day;
	int year;
	int month;

	month = 2;
	day = 29;
	year = 1999;

	if (year % 4 != 0 && month == 2 && day > 28)
	{
		printf("Wrong Date");
	}
	else
	{
		printf("Date: %02d/%02d/%04d\n", month, day, year);

		day = convert_day(month, day);

		print_remaining_days(month, day, year);
	}

	return (0);
}

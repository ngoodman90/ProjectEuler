#include <stdio.h>

int 
main()
{
	int day_of_week = 3;
	int day_of_month = 1;
	int month = 1;
	int year = 1901;
	int days_in_month = 31;
	int num_of_sundays_at_the_beginning_of_month = 0;

	while (!(day_of_month == 31 && month == 12 && year == 2000))	
	{	
		if (day_of_week == 1 && day_of_month == 1)
			num_of_sundays_at_the_beginning_of_month++;

		day_of_week = (day_of_week % 7) + 1;


		if (day_of_month == days_in_month)
		{
			day_of_month = 0;
			if (month == 12)
			{
				year++;
				printf("day_of_week: %d, day_of_month: %d, month %d, year: %d. \n", day_of_week, day_of_month, month, year);
			}

			month = (month % 12) + 1;

			switch(month)
			{
				case 1: days_in_month = 31; break;
				case 2: 
					if (year % 4 == 0)
					{
						days_in_month = 29;
						if (year % 100 == 0)
						{
							days_in_month = 28;
							printf("Leap Year!!! day_of_week: %d, day_of_month: %d, month %d, year: %d. \n", day_of_week, day_of_month, month, year);
							if (year % 400 == 0)
								days_in_month = 29;
						}
					}
					else 
						days_in_month = 28;
					break;
				case 3: days_in_month = 31; break;
				case 4: days_in_month = 30; break;
				case 5: days_in_month = 31; break;
				case 6: days_in_month = 30; break;
				case 7: days_in_month = 31; break;
				case 8: days_in_month = 31; break;
				case 9: days_in_month = 30; break;
				case 10: days_in_month = 31; break;
				case 11: days_in_month = 30; break;
				case 12: days_in_month = 31; break;
			}
		}
		day_of_month++;
	}
	printf("%d\n", num_of_sundays_at_the_beginning_of_month);
	return 0;
}

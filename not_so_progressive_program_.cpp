#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define L 7	
void main()
{
	struct temperature_data_base
	{
		int month;
		int day;
		int temp;
	} x[L], * p = x;
	int i;
	int k = 0;
	system("cls");

	for (i = 0; i < L; i++)
	{
		printf("\nMonth: ");
		scanf_s("%i", &x[i].month);
		printf("day: ");
		scanf_s("%i", &x[i].day);
		printf("temp: ");
		scanf_s("%i", &x[i].temp);
	}
	fflush(stdin);
	for (i = 0; i < L; i++,p++)
		if (p->temp > 0)
		{
			printf("\nMonth=%i \n  Day=%i\n  tempereture=%i\n\n", p->month, p->day, p->temp);
			k++;
		}
	if (k > 0)
	{
		printf("Number of days with positive temperatures - %i", k);
	}
	else
		printf("\nLooks like it's cold outside");
	printf("\nprivet");
	_getch();
}
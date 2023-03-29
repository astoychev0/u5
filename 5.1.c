#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int task1(float* res)
{
	float value, amot, annual_depreciation, years_to_zero_values;
	int years = 0;
	 printf("Enter the value of the equipment");
	 scanf_s("%f", &value);
	
	printf("Enter the annual depreciation rate in percentage:");
	scanf_s("%f", &amot);
	
	annual_depreciation = value * (amot / 100);
	
	while (value > 0)
	{
		value -= annual_depreciation;
		years++;
	}
	years_to_zero_value = years - 1 + (value + annual_depreciation) / annual_depreciation;
	printf("it will take %d years and %.2f months for the value of equipment to be zero.\n",
	(int)years_to_zero_value, 12*(years_to_zero_value - (int)years_to_zero_value));
	system("pause");
	return 0;
	
 } 

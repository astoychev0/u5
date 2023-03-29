#include <stdio.h>

int main()
{
	double amount, interest;
	int years = 0;
	
	printf("Enter the amount invested:");
	scanf("%f", &amount);
	
	printf("Enter the annual interest rate (percentage):");
	scanf("%d",interest);
	
	double target = 1e6;
	
	interest /= 100.0;
	
	while (amount < target){
		double earned = amount * interest;
		amount += earned;
		years++;
	}
	printf("It will take %d years for investment to reach $1,000,000\n",years);
	
	system("pause");
	return 0;
	
}

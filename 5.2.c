#include <stdio.h>

int main()
{
	int n, countEven = 0, sum = 0, countALL = 0;
	double average;
	while (countEven < 10 )
	{
		printf("Enter an integer :");
		scanf("%d", &n);
		if (n %2 == 0)
		
    {
	
	
	
	sum += n;
	countEven ++;
}
    countALL++;
}
printf("Total number of the entered integers: %d/n", countALL);
if(countEven > 0)
{
	average= (double)sum / countEven;
	printf("Average of the even integers: %.2f/n", average);
}
system("pause");
return 0;
}

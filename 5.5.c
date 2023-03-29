#include <stdio.h>

int main()
{
	int n,i,f1= 0,f2 = 1,f;
	
	printf("Enter the number of Fibonacci numbers to generate: ");
	scanf("%d" &n);
	printf("%d %d"f1,f2);
	
	for (i=3, i <= n ,i++)
	{
		f= f1+f2;
		f1=f2;
		f2=f;
		printf("%d",f);
	}
	printf("\n");
	
	system("pause");
	return 0;
	
}

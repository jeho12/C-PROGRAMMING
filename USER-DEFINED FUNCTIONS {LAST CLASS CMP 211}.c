// write a program to print the maximum number between two numbers using user-defined functions
#include<stdio.h>
int max(int num1, int num2)
{
	int max;
	if(num1>num2)
	{
		max = num1;
	}
	else
	{
		max= num2;
	}
	return max;
}

int main()
{
	int num1, num2;
	printf("Enter Two numbers: ");
	scanf("%d%d", &num1,&num2);
	
	printf("the maximum is %d", max);
	
	return 0;
	
	
}

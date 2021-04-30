/*
  Binoy Das Gupta
  C program to check whether a number is Perfect number or not.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int num,i,sum=0; //declaring variables
	printf("Enter a number = ");
	scanf("%d",&num); //taking input
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum = sum+i;
		}
	}
	if(num==sum)
	{
		printf("%d is a perfect number\n",num);
	}
	else
	{
		printf("%d is not a perfect number\n",num);
	}
	return 0;
}

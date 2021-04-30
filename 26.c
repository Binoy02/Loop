/*
  Binoy Das Gupta
  C program to check whether a number is prime number or not.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter a number = ");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==1)
	{
		printf("The number is a Prime number\n");
	}
	else
	{
		printf("The number is not a Prime number\n");
	}
	return 0;
}

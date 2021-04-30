/*
  Binoy Das Gupta
  C program to check whether a number is Strong number or not.
  23-04-2021
*/

#include<stdio.h>
int main()
{
	int num,temp,r,i,fact,sum=0; //declaring variables
	printf("Enter a number = ");
	scanf("%d",&num); //taking input
	temp=num;
	while(temp!=0)
	{
		fact=1;
		r = temp%10;
		for(i=1;i<=r;i++)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		temp = temp/10;
	}
	if(num==sum)
	{
		printf("%d is a strong number\n",num);
	}
	else
	{
		printf("%d is not a strong number\n",num);
	}
	return 0;
}

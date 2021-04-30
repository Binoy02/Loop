/*
  Binoy Das Gupta
  C program to check whether a number is Armstrong number or not.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int num,temp,r,sum=0; //declaring variables
	printf("Enter a number = ");
	scanf("%d",&num); //taking input
	temp=num;
	while(temp!=0)
	{
		r = temp%10;
		sum = sum + r*r*r;
		temp = temp/10;
	}
	if(num==sum)
	{
		printf("%d is an Armstrong number\n",num);
	}
	else
	{
		printf("%d is not an armstrong number\n",num);
	}
	return 0;
}

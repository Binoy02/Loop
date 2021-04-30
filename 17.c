/*
  Binoy Das Gupta
  C program to check whether a number is palindrome or not.
  21-04-2021
*/

#include<stdio.h>
int main()
{
	int num,temp,r,sum=0; // declaring variables
	printf("Enter a number = ");
	scanf("%d",&num); // taking input
	temp = num;
	while(temp!=0)
	{
		r = temp % 10;
		sum = sum*10 + r;
		temp = temp/10;
	}
	if(num==sum)
	{
		printf("The  entered number is a Palindrome number\n");
	}
	else
	{
		printf("The entered number is not a Palindrome number\n");
	}
	return 0;
}

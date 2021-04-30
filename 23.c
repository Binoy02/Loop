/*
  Binoy Das Gupta
  C program to calculate factorial of a number.
  18-04-2021
*/

#include<stdio.h>
int main()
{
	int num,i,fact=1; //declaring variables
	
	printf("Enter a positive number = ");
	scanf("%d",&num); //taking input
	
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("%d! = %d\n",num,fact);
	
	return 0;
}

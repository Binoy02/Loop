/*
  Binoy Das Gupta
  C program to enter a number and print its reverse.
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
	printf("Reverse of the entered number is = %d\n",sum);
	return 0;
}

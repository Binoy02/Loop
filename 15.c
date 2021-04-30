/*
  Binoy Das Gupta
  C program to calculate product of digits of a number.
  21-04-2021
*/

#include<stdio.h>
int main()
{
	int num,temp,r,prod=1; // declaring variables
	printf("Enter a number : ");
	scanf("%d",&num); // taking input
	temp = num;
	while(temp!=0)
	{
		r = temp % 10;
		prod = prod * r;
		temp = temp/10;
	}
	printf("Product of digits of the entered number is = %d\n",prod);
	return 0;
}

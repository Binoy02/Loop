/*
  Binoy Das Gupta
  C program to find sum of first and last digit of a number.
  21-04-2021
*/

#include<stdio.h>
int main()
{
	int num,last_digit,first_digit,sum; // declaring variables
	printf("Enter a number : ");
	scanf("%d",&num);
	last_digit = num%10;
	while(num>10)
	{
		num=num/10;
	}
	first_digit = num;
	sum = first_digit + last_digit;
	printf("Sum of first and last digit is = %d\n",sum);
	return 0;
}

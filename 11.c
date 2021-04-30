/*
  Binoy Das Gupta
  C program to find first and last digit of a number.
  21-04-2021
*/

#include<stdio.h>
int main()
{
	int num,last_digit,first_digit; // declaring variables
	printf("Enter a number = "); // taking input
	scanf("%d",&num);
	last_digit = num%10;
	while(num>10)
	{
		num=num/10;
	}
	first_digit = num;
	printf("First digit is = %d\n",first_digit);
	printf("Last digit is = %d\n",last_digit);
	
	return 0;
}

/*
  Binoy Das Gupta
  C program to find LCM of two numbers.
  21-04-2021
*/

#include<stdio.h>
int main()
{
	int num1,num2,rem,temp1,temp2,gcd,lcm; // declaring variables
	printf("Enter two numbers : ");
	scanf("%d %d",&num1,&num2); // taking input
	temp1=num1;
	temp2=num2;
	while(temp2!=0)
	{
		rem = temp1 % temp2;
		temp1 = temp2;
		temp2 = rem;
	}
	gcd = temp1;
	lcm = (num1*num2)/gcd;
	printf("LCM of entered two numbers is = %d\n",lcm);
	return 0;
}

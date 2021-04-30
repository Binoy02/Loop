/*
  Binoy Das Gupta
  C program to find HCF (GCD) of two numbers.
  21-04-2021
*/

#include<stdio.h>
int main()
{
	int num1,num2,temp1,temp2,rem,gcd;
	printf("Enter two numbers : ");
	scanf("%d %d",&num1,&num2);
	while(num2!=0)
	{
		rem = num1 % num2;
		num1 = num2;
		num2 = rem;
	}
	gcd = num1;
	printf("GCD of two numbers is = %d\n",gcd);
	return 0;
}

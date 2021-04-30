/*
  Binoy Das Gupta
  C program to find power of a number using for loop.
  22-04-2021
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int base,exponent,power;
	printf("Enter base and exponent : ");
	scanf("%d %d",&base,&exponent);
	power = pow(base,exponent);
	printf("%d power %d = %d\n",base,exponent,power);
	return 0;
}

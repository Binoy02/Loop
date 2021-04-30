/*
  Binoy Das Gupta
  C program to find power of a number using function.
  22-04-2021
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int base,exponent,power; // declaring variables
	printf("Enter base and exponent : ");
	scanf("%d %d",&base,&exponent); // taking inputs
	power = pow(base,exponent);
	printf("%d power %d = %d\n",base,exponent,power);
	return 0;
}

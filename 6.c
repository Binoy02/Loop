/*
  Binoy Das Gupta
  C program to find sum of all natural numbers between 1 to n.
  13-04-2021
*/

#include<stdio.h>
int main()
{
	int n,i;
	int sum = 0;
	
	printf("Enter range : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	
	printf("Sum of all natural numbers from 1 to %d is = %d\n",n,sum);
	
	return 0;
}

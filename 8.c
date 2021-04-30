/*
  Binoy Das Gupta
  C program to find sum of all odd numbers between 1 to n.
  15-04-2021
*/

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("Enter the range : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum = sum + i;
		}
	}
	
	printf("Sum of odd numbers between 1 to %d : %d\n",n,sum);
	
	return 0;
}

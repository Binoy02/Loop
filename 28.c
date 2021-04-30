/*
  Binoy Das Gupta
  C program to find sum of all prime numbers between 1 to n.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int n,i,j,count,sum=0; // declaring variables
	printf("Enter the limit : ");
	scanf("%d",&n); // taking input
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==1)
		{
			sum = sum + i;
		}
	}
	printf("Sum of all prime numbers between 1 to %d = %d\n",n,sum);
	return 0;
}

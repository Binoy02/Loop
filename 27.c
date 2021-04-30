/*
  Binoy Das Gupta
  C program to print all prime numbers between 1 to n.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int n,i,j,count; // declaring variables
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Prime numbers between 1 to %d :\n",n);
	for(i=2;i<=n;i++)
	{
		count = 0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

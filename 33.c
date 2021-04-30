/*
  Binoy Das Gupta
  C program to print all Perfect numbers between 1 to n.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int n,i,j,sum;
	printf("Enter the limit = ");
	scanf("%d",&n);
	printf("Perfect numbers between 1 to %d : ",n);
	for(i=1;i<=n;i++)
	{
		sum = 0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum = sum + j;
			}
		}
		if(i==sum)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

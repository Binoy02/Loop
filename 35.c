/*
  Binoy Das Gupta
  C program to print all Strong numbers between 1 to n.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int n,i,temp,r,j,fact,sum; // declaring variables
	printf("Enter the limit : ");
	scanf("%d",&n); // taking input
	printf("Strong numbers between 1 to %d : ",n);
	for(i=1;i<=n;i++)
	{
		sum = 0;
		temp = i;
		while(temp!=0)
		{
			fact = 1;
			r = temp%10;
			for(j=1;j<=r;j++)
			{
				fact = fact * j;
			}
			sum = sum + fact;
			temp = temp/10;
		}
		if(i == sum)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

/*
  Binoy Das Gupta
  C program to print all Armstrong numbers between 1 to n.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int n,i,j,sum,temp,r; //declaring variables
	printf("Enter the limit = ");
	scanf("%d",&n); //taking input
	printf("Armstrong number between 1 to %d : ",n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		temp=i;
		while(temp!=0)
		{
			r = temp%10;
			sum = sum + r*r*r;
			temp = temp/10;
		}
		if(i==sum)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

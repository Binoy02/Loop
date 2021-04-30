/*
  Binoy Das Gupta
  C program to find all prime factors of a number.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int num,i,j,count; //declaring variables
	printf("Enter a number = ");
	scanf("%d",&num); //taking input
	printf("The prime factors of %d : ",num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
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
	}
	return 0;
}

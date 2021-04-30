/*
  Binoy Das Gupta
  C program to print all natural numbers from 1 to n.-using while loop
  12-04-2021
*/

#include<stdio.h>
int main()
{
	// declaring variables
	int n,i=1;
	
	// taking input
	printf("Enter the range : ");
	scanf("%d",&n);
	
	printf("Natural numbers from 1 to %d :\n",n);
	
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
	
	return 0;
}

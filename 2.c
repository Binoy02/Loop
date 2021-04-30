/*
  Binoy Das Gupta
  C program to print all natural numbers in reverse (from n to 1). - using while loop
  16-04-2021
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	printf("Natural numbers in reverse from %d to 1 :\n",n);
	
	while(n>=1)
	{
		printf("%d ",n);
		n--;
	}
	
	return 0;
}

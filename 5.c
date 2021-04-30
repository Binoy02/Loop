/*
  Binoy Das Gupta
  C program to print all odd number between 1 to 100.
  13-04-2021
*/

#include<stdio.h>
int main()
{
	int i;
	
	printf("Odd numbers between 1 to 100 :\n");
	
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}

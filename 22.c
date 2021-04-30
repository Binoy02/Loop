/*
  Binoy Das Gupta
  C program to find all factors of a number.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int num,i; //declaring variables
	printf("Enter a number = ");
	scanf("%d",&num);
	printf("The factors of the entered number are : \n");
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d,",i);
		}
	}
	return 0;
}

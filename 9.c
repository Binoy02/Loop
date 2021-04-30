/*
  Binoy Das Gupta
  C program to print multiplication table of any number.
  16-04-2021
*/

#include<stdio.h>
int main()
{
	int num,i;
	
	printf("Enter any number : ");
	scanf("%d",&num);
	printf("Multiplication table of %d :\n",num);
	
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	return 0;
}

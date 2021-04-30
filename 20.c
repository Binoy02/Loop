/*
  Binoy Das Gupta
  C program to print all ASCII character with their values.
  22-04-2021
*/

#include<stdio.h>
int main()
{
	int i; // declaring variable
	for(i=0;i<=255;i++)
	{
		printf("ASCII value of %c is = %d\n",i,i);
	}
	return 0;
}

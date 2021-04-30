/*
  Binoy Das Gupta
  C program to print all alphabets from a to z. - using while loop
  13-04-2021
*/

#include<stdio.h>
int main()
{
	int i;
	
	printf("Alphabets from a to z is :\n");
	
	for(i=97;i<=122;i++)
	{
		printf("%c\n",i);
	}
	
	return 0;
}

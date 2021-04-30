/*
  Binoy Das Gupta
  C program to print all even numbers between 1 to 100. - using while loop
  12-04-2021
*/

#include<stdio.h>
int main()
{
	// declaring variable
	int i=1;
	
	printf("Even numbers between 1 to 100 :\n");
	
	while(i<=100)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	
	return 0;
}

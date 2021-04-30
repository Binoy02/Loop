/*
  Binoy Das Gupta
  C program to print Fibonacci series upto n terms.
  23-04-2021
*/

#include<stdio.h>
int main()
{
	int n,count=0,fibo,first=0,second=1; //declaring variables
	printf("Enter the limit : ");
	scanf("%d",&n); //taking input
	printf("Fibonacci series upto %d terms : ",n);
	while(count<n)
	{
		if(count<=1)
		{
			fibo = count;
		}
		else
		{
			fibo = first + second;
			first = second;
			second = fibo;
		}
		printf("%d ",fibo);
		count++;
	}
	return 0;
}

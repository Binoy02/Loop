/*
  Binoy Das Gupta
  C program to print fibonacci series upto n terms.
  23-04-2021
*/

#include<stdio.h>
int main()
{
	int n,i,first=1,second=1,fibo; //declaring variables
	printf("Enter terms = ");
	scanf("%d",&n); //taking input
	printf("Fibonacci series upto %d terms : ",n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",first);
		fibo = first + second;
		first = second;
		second = fibo;
	}
	return 0;
}

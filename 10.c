/*
  Binoy Das Gupta
  C program to count number of digits in a number.
  20-04-2021
*/

#include<stdio.h>
int main()
{
	int num,count=0,temp,r; //declaring variables
	printf("Enter a number : "); //taking input
	scanf("%d",&num);
	temp = num;
	while(temp!=0)
	{
		r = temp%10;
		count++;
		temp = temp/10;
	}
	
	printf("Number of digits in the entered number are : %d\n",count);
	return 0;
}

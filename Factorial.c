#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num,fact=1;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of a number =%d",fact);
	getch();
}
	



		
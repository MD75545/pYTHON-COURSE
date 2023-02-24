#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int choice,a,b,Add,Sub,Mul,Div;
	printf("\nEnter your choice 1.Addition,2.substraction,3.Multiplication,4.division");
	scanf("%d",&choice);
	printf("Enter two numbers a and b");
	scanf("%d %d",&a,&b);
	switch(choice)
	{
case 1: Add=a+b;
	   printf("Addition of number =%d",Add);
	   break;

case 2: Sub=a-b;
	   printf("substraction of number =%d",Sub);
	   break;

case 3: Mul=a*b;
	   printf("multiplication of number =%d",Mul);
	   break;

case 4: Div=a/b;
	   printf("division of number =%d",Div);
	   break;
case 5:exit(0);

	default: printf("None of choise is ours");
	
	}
	getch();
}



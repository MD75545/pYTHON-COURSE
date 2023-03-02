#include<stdio.h>
#include<conio.h>
void main()
{
	int *p;
	int a=100;
	 p=&a;

	 printf("\n Address of a=%d",a);
	 printf("\n value of p=%d",p);
	 printf("\n value of a=%d",a);
	 printf("\n value of using pointer =%d",*p);
	 getch();
}
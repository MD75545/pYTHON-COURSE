#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,n,ci;
	printf("Enter a principal ammount,rate of intrest,years");
	scanf("%d %d %d",&p,&r,&n); 
	ci=p*r*n/100;
	printf("Compound intrest is =%d",ci);
	getch();
}

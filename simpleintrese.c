#include<stdio.h>
#include<conio.h>
#define Simpleintrest(p,r,n) (p*r*n/100)
void main(){
	float p=10000,r=4.3,n=6,si;
	si=Simpleintrest(p,r,n);
	printf("Simple intrest=%f",si);
	getch();
}
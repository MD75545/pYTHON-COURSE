#include<stdio.h>
#include<conio.h>
#define ADD1(n1,n2)(n1+n2)
#define ADD(n1,n2,n3)(ADD1(n1,n2)+n3)
void main(){
	int a=20,b=30,c=40,res;
	res=ADD(a,b,c);
	printf("Addition is=%d",res);
	getch();
}
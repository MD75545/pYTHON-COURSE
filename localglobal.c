#include<stdio.h>
#include<conio.h>
int m=25; //globalvariable
void show(){
	int y=10;  //loca variable
	printf("\n y=%d",y); 
}
void main(){
	int x=50;
	printf("\n x=%d",x);
	printf("\nm=%d",m);
	show();
	getch();
}

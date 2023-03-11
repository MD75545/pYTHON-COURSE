#include<stdio.h>
#include<conio.h>
enum COLOR {RED,BLUE,VIOLET,PINK=10,BLACK};
void main()
{
	enum COLOR c;
	c=RED;
	printf("\n Red Color code=%d",c);
	printf("\n blue Color code=%d",BLUE);
	printf("\n black Color code=%d",BLACK);
	getch();
}
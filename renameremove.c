#include<stdio.h>
#include<conio.h>
void main()
{
	rename("position.txt","seed infotech.txt");
	printf("file rename sucessfully\n");
	remove("seed infotech.txt");
	printf("file remove sucessfully\n");
	getch();
}
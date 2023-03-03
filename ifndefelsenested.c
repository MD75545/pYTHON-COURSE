#include<stdio.h>
#include<conio.h>
#define MESSAGE
void main(){

#ifndef MESSAGE
	printf("Macro is not define hence we can define");
#define MESSAGE("HELLO")
	MESSAGE;
#else 
	printf("Macros is already define");
#endif
	getch();
}
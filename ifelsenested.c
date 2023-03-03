#include<stdio.h>
#include<conio.h>
#define AMT 50
#define BAL 50000
void main(){
#if(AMT<BAL)
	printf("yeah ...you can withdrawl balance");
#else
	printf("sorry...bal is low");
#endif
	getch();
}
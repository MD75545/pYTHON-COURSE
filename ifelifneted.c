#include<stdio.h>
#include<conio.h>
#define NUM 100
void main()
{
#if(NUM==50)
	printf("fifty");
#elif(NUM==100)
	printf("hundred");
#elif(NUM==60):
	printf("sisxty")
#else
    printf("num is anything");
#endif
	getch();
}
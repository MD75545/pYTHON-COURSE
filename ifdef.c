#include<stdio.h>
#include<conio.h>
#define MESSAGE printf("Welcomwe to seed");
void main()
{
#ifdef MESSAGE
		printf("maacro is defined");
#else
		printf("macro is not defined");
#endif
		getch();
		}

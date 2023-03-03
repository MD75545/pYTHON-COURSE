#include<stdio.h>
#include<conio.h>
#define bal 1000000
void main()
{
	int amt;
	printf("Enter amount you want to withdrawl");
	scanf("%d",&amt);
#if (amt<bal)
	printf("yeah....you can withdrawl balance");
#endif
	getch();
}

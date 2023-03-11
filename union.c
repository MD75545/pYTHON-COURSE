#include<stdio.h>
#include<conio.h>
union student
{
	int roll_no;
	char name[10];
	float per;
};
void main()
{
	union student u;
    printf("Enter roll no,name percentage");
	scanf("%d%s%f",&u.roll_no,u.name,&u.per);
	printf("\n Roll no=%d \n Name=%s\n per=%f",u.roll_no,u.name,u.per);
	getch();
}
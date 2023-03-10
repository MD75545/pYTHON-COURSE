#include<stdio.h>
#include<conio.h>
struct student
{
	int roll_no;
	char name[10];
	float per;
};
void main()
{
	struct student s;
	printf("Enter roll no,name,percentage");
	scanf("%d%s%f",&s.roll_no,s.name,&s.per);
	printf("\n Roll=%d \n name=%s \n percentage=%f",s.roll_no,s.name,s.per);
	getch();
}
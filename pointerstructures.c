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
	struct student*p=&s;
	printf("Enter roll no,name & percnetage");
	scanf("%d%s%f",&p->roll_no,p->name,&p->per);
	printf("\n roll_no=%d \n name=%s \n per=%f",p->roll_no,p->name,p->per);
	getch();
}
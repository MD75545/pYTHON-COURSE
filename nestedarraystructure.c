#include<stdio.h>
#include<conio.h>
struct student{
	int roll_no;
	char name[10];
	float per;
};
struct Address{
	char city[10];
	struct student s;
};
void main(){ 
	struct Address a;
	printf("\n Enter roll no,name,percentage and city");
	scanf("%d%s%f%s",&a.s.roll_no,a.s.name,&a.s.per,a.city);
	printf("roll no=%d \n Name=%s \n per=%f \n city=%s",a.s.roll_no,a.s.name,a.s.per,a.city);
	getch();
}
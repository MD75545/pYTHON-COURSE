#include<stdio.h>
#include<conio.h>
typedef struct student{
	int roll_no;
	char name[10];
	float per;
};
void main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter student rollno,name,percentage");
		scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].per);
	}
	printf("\n display student information");
	for(i=0;i<5;i++)
	{
		printf("\n Roll no=%d \n Name=%s \n percentage=%f",s[i].roll_no,s[i].name,s[i].per);
	}
	getch();
}
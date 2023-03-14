#include<stdio.h>
#include<conio.h>
typedef struct
{
	int rollno;
	char name[10];
	float per;
}student;
void main()
{
	FILE *fp;
	student s;
	printf("Enter data \n");
	printf("Enter rollno\n");
	scanf("%d",&s.rollno);
	printf("Enter name\n");
    scanf("%d",s.name);
	printf("Enter percentage \n");
	scanf("%f",&s.per);
	fp=fopen("mixdata.txt","w");
	fprintf(fp,"Rollno=%d \n Name=%s \n percentage=%f\n",s.rollno,s.name,s.per);
	fclose(fp);
	fp=fopen("mixdata.txt","r");
	fscanf(fp,"Rollno=%d \n Name=%s \n percentage=%f\n",&s.rollno,s.name,&s.per);
	fclose(fp);
	getch();
}

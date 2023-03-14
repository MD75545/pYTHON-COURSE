#include<stdio.h>
#include<conio.h>
typedef struct
{
	int rollno;
	char name[10];
	float per;
}stud;
void main()
{
	FILE *fp;
	stud s;
	printf("Enter data\n");
	printf("Enter rollno");
	scanf("%d",&s.rollno);
	printf("Enter name");
	scanf("%s",s.name);
	printf("Enter percentage");
	scanf("%f",&s.per);
	fp=fopen("Binaray file.txt","wb");
	fwrite(&s,sizeof(s),4,fp);
	fclose(fp);
	fp=fopen("Binaray file.txt","rb");
	fread(&s,sizeof(s),4,fp);
	fclose(fp);
	getch();
}
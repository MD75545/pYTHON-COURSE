#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	fp=fopen("C programmng.txt","w");
	printf("File created sucesfully\n");
	fp=fopen("C programming.pdf","w");
	printf("File created sucessfully \n");
	fp=fopen("C programming.ppt","w");
	printf("File created sucessfully \n");
	fp=fopen("c programming.xls","w");
	printf("File created sucessfully \n");
	fp=fopen("demo.txt","r");
	printf("File read sucessfully \n");
	fclose(fp);
	getch();
}
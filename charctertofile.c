#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	//char ch;

	char ch;
	/*
	fp=fopen("Student.txt","w");
	fputc('S',fp);
	fclose(fp);

	fp=fopen("Student.txt","a");
	fputc('E',fp);
	fclose(fp);

	fp=fopen("Student.txt","a");
	fputc('E',fp);
	fclose(fp);

	fp=fopen("Student.txt","a");
	fputc('D',fp);
	fclose(fp);
	*/
	fp=fopen("Student.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		//putchar(ch);
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
		
	
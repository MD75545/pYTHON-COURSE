#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char str[10];
	printf("Enter string");
	gets(str);
	fp=fopen("string.txt","w");
	fputs(str,fp);
	fclose(fp);
	fp=fopen("string.txt","r");
	printf("%s",fgets(str,2,fp));
	fclose(fp);
	getch();
}
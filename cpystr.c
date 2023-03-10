#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[15],str2[15];
	printf("Enter string");
	gets(str1);
	strcpy(str2,str1);
	printf("Copied string=%s",str2);
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	int i;
	char temp[10];
	char *str;
	printf("Enter string");
	gets(temp);
	str=(char*)malloc(strlen(temp)+1);
	strcpy(str,temp);
	puts(str);
	free(str);
	getch();
}
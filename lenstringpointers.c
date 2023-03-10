#include<stdio.h>
#include<conio.h>
int stringlen(char *ptr){
	int count=0;
	while(*ptr!='\0'){
		count++;
		ptr++;
	}
	return count;
}
void main()
{
	int len;
	char str[15];
	printf("Enter string");
	gets(str);
    len=stringlen(str);
	printf("Length of the string is %d",len);
	getch();
}
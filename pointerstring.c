#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char str[15] ="seed infotech";
	char *ptr;
	ptr=str;
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	getch();
}

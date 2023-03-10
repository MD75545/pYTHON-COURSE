#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char str[10];
	printf("Enter your name \n");
	for(i=0;i<10;i++)
	{
		fflush(stdin);
		scanf("%c",&str[i]);
	}
	str[i]='\0';
		printf("Display string \n");
		for(i<0;i<10;i++){
			printf("%c",str[i]);
		}
		getch();
}
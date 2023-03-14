#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int count;
	fp=fopen("position.txt","w");
	fputs("Seed Infotech",fp);
	fseek(fp,6,0);
	count=ftell(fp);
	printf("Total bytes consumed=%d\n",count);
	rewind(fp);
	count=ftell(fp);
	printf("Total bytes consumed=%d",count);
	fclose(fp);
	getch();
}
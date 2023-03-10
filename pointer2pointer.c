#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	int **ptr;
	int row,col,i,j;
	printf("\n how many rows and column you want");
	scanf("%d%d",&row,&col);
	ptr=(int**)malloc(row*sizeof(int));
	for(i=0;i<row;i++)
	{
		ptr[i]=(int*)malloc(col*sizeof(int));
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
		{
			printf("\n Enter array elements");
			scanf("%d",&ptr[i][j]);
		}
	}
	printf("\n display array elemnts");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",ptr[i][j]);}
		printf("\n");
	}
	free(ptr);
	getch();
}
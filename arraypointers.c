#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	int *ptr[3],col,i,j;
	printf("Enter how many col you hae to create");
	scanf("%d",&col);
	for(i=0;i<3;i++)
	{
		ptr[i]=(int*)malloc(col*sizeof(int));
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j,col;j++)
		{
			printf("Enter array of elementsd");
			scanf("%d",&ptr[i][j]);
		}

	}
	printf("Displsy srrsy element\n");
	for(i=0;i<3;i++){
		printf("%d \t",ptr[i][j]);
	}
	printf("\n");
getch();
}

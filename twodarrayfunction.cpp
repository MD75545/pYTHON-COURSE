#include<stdio.h>
#include<conio.h>
void accept(int[][3]);
void display(int[][3]);

void accept(int arr[][3]){
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter array elements");
			scanf("%d",&arr[i][j]);
		}
	}
}
void display(int arr[][3]){
	int i,j;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\t %d",arr[i][j]);
	}
	printf("\n");
}
}
void main()
{
	int arr[3][3];
	accept(arr);
	display(arr);
	getch();
}

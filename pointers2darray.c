#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,arr[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter array elements");
			scanf("%d",*(arr+i)+j);
		}
	}
	printf("Display array elements\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",*(*(arr+i)+j));
		}
		printf("\n");
	}
	getch();
}
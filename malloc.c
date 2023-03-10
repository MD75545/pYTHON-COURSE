#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	int *ptr;
	int n,i;
	printf("\n Enter how many values you have to store");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter array elements");
		scanf("%d",&ptr[i]);
	}
	printf("\n Display array elements");
	for(i=0;i<n;i++)
	{
		printf("\t%d",ptr[i]);
	}
	free(ptr);
	getch();
}

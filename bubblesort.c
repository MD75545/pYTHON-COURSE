#include<stdio.h>
#include<conio.h>
void main(){
	int arr[100],i,j,no,temp;
	printf("Enter how many elements you want");
	scanf("%d",&no);
	printf("\n Enter array elemnts");
	for(i=0;i<no;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<no-1;i++)
	{
		for(j=0;j<no-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<no;i++)
	{
		printf("%d\t",arr[i]);
	}
	getch();
}

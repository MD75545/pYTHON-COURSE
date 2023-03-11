#include<stdio.h>
#include<conio.h>
void insertion (int array[],int n)
{
	int i,element,j;
	for(i=1;i<n;i++)
	{
		element=array[i];
		j=i-1;
		while(j>=0&&array[j]>element)
		{
			array[j+1]=array[j];
		j=j-1;
		}
		array[j+1]=element;
	}
}
void printarray(int array [],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d",array [i]);
}
void main()
{
	int arr[5]={3,2,5,2,7},n=5;
	insertion(arr,n);
	printarray(arr,n);
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5,i,j,temp;
	int arr[]={4,5,1,3,6};
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
       printf("Sorted array: ");
for(i=0;i<n;i++)
{
	printf("%d",arr[i]);
}
getch();
}
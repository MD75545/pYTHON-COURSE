#include<stdio.h>
#include<conio.h>
void accept(int arr[]);
void display(int arr[]);

void diplay(int arr[]){
	int i;
	printf("Enter elements of array");
	for(i=0;i<5;i++){
		printf("\n Enter value for %d location",i);
		scanf("%d",arr+i);
	}
}
void display(int arr[]){
	int i;
	printf("\n Display array elements");
	for(i=0;i<5;i++){
		printf("\t %d",*(arr+i));
	}
}
void main(){
	int arr[5];
	accept(arr);
	display(arr);
	getch();
}
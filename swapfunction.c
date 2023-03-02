#include<stdio.h>
#include<conio.h>

	int swap(int*,int*);
	int swap(int*a,int*b)
	{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
	}
	void main(){
		int a,b;
		printf("\n enter values of a &b");
		scanf("%d %d",&a,&b);
		swap(&a,&b);
		printf("After swapping values of a=%d and b=%d",a,b);
		getch();
	}

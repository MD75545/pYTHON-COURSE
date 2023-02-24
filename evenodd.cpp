#include<stdio.h>
#include<conio.h>
void main()
{
	int num=1 ;
	while(num<=100)
	{
	  if(num%2==0)
	{
		printf("\nnumber is even:%d",num);
	}
	  else{
		printf("\nNumber is odd:%d",num);
	}
	  num++;
	}
	getch();
}

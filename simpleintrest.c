#include<stdio.h>
#include<conio.h>
void main()
{
	int marks,A,B,C,D;
	printf("Enter the marks");
	scanf("%d", &marks);
	if(marks>=75)
		printf("GradeA");
	else if(marks>=60)
	{
			printf("Grade b");
	}
	else if(marks>=40){
	printf("grade c");
	}
	else if(marks<40){
	printf("Grade d");
	}
	getch();
}


	

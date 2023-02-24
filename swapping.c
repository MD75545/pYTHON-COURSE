#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  printf("Enter two numbers");
  scanf("%d %d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swapping values of a and b are =%d %d",a,b);
  getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int sp,cp,pf,ls;
	printf("enter the selling price,AND COST PRICE");
	scanf("%d %d",&sp,&cp);
	pf=sp+cp/cp;
	ls=cp-sp/cp;
if(pf>cp)
	printf("we have got profit");
else
	printf("We have got loss");
getch();
}


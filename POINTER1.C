#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;

}
void main()
{

	int x,y;
	clrscr();
	printf("\n Enter Value:");
	scanf("%d",&x);
	printf("\n Enter Value:");
	scanf("%d",&y);
	printf("\n Value of X & Y Before Swap Is %d & %d",x,y);
	swap(x,y);
	printf("\n Value Of X & Y After Swap Is %d & %d",x,y);
	getch();

}
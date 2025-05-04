#include<stdio.h>
#include<conio.h>

int sub (int a, int b)
{
	return a-b;

}
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter A & B is : ");
	scanf("%d%d",&a,&b);
       printf(" Subtraction : %d ",sub(a,b));
	getch();

}
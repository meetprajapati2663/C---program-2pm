#include<stdio.h>
#include<conio.h>

void add(int a, int b)
{

	printf("\n Addition is :%d",a+b);

}

void main()
{
	int a,b;
	clrscr();
	printf("\n Addition is A & B :");
	scanf("%d%d",&a,&b);
	add(a,b);
	getch();

}
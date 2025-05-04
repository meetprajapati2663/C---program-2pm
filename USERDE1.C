#include<stdio.h>
#include<conio.h>

void add(int a, int b)
{
	printf("\n Addition Is: %d",a+b);
}

void main()
{
	int a,b;
	clrscr();
	printf("\n Addition A & B is: ");
	scanf("%d%d",&a,&b);
	add(a,b);
	getch();


}
#include<stdio.h>
#include<conio.h>

void main()
{

	double a,b,*p,*q;
	clrscr();
	a=10;
	p=&a;
	printf("\nA :%lf",a);
	printf("\nP :%u",p);
	b=20;
	q=&b;
	printf("\nB: %lf",b);
	printf("\nQ :%u",q);
	getch();

}
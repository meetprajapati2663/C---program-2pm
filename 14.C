#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum=0;
	clrscr();
	printf("\nEnter N:");
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum+n;
		n=n-1;
	}
	printf("\nSum:%d",sum);
	getch();
}
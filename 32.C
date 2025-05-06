#include<stdio.h>
#include<conio.h>

struct Max
{
	int a,b,c;
};
void main()
{
	struct Max m;
	clrscr();
	printf("\n Enter A Value :");
	scanf("%d",&m.a);
	printf("\n Enter B Value :");
	scanf("%d",&m.b);
	printf("\n Enter C Value");
	scanf("%d",&m.c);
	if(m.a>m.b)
	{
		if(m.a>m.c)
		{
			printf("\n A is Max");

		}
		else
		{
			printf("\n C is Max");

		}
	}
		else if(m.b>m.c)
		{
			printf("\n B Is Max");
		}
		else
		{
			printf("\n C Is Max");
		}


		getch();

}
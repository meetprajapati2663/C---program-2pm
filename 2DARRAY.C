#include<stdio.h>
#include<conio.h>

void main()
{

	int a[3][3],b[3][3],c[3][3]i,j;
	clrscr();
	printf("\nEnter 2 D Array A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\Enter %d Row & %d Column :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter 2 D Array B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\Enter %d Row & %d Column :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j]
		}
	printf("\n2 D Array C IS\n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("")
		}

	}
	}
	getch();
}
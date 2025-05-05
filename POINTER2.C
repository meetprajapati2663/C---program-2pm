#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],*p,i;
	clrscr();
	printf("\nEnter Array Elements\n");
	for(i=0;i<5;i++)
	{
		printf("\n Enter %d Elements:",i);
		scanf("%d",a[i]);

	}
	p=a;
	printf("\nArray Elements & Their Adrees Are\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]=%d with Adrres %u", i,a[i],p++);

	}
	getch();

}

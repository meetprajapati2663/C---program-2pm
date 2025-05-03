#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,sum=0;
	clrscr();
	printf("\n Enter Array Element :\n");
	for(i=0;i<5;i++)
	{
		printf("\n Array %d Element:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
		printf("\n Sum :%d",sum);
		printf("\nArray Element Are:\n");
		for(i=0;i<5;i++)
		{
			printf("\n [%d]=%d",i,a[i]);

		}
		getch();
}

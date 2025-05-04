#include<stdio.h>
#include<conio.h>

void main()
{
	int rno,s1,s2,s3,total;
	double per;
	char sname[50];
	clrscr();
	printf("\nEnter Student name:");
	gets(sname);
	printf("\nEnter Roll no:");
	scanf("%d",&rno);
	printf("\nEnter S1:");
	scanf("%d",&s1);
	printf("\nEnter S2:");
	scanf("%d",&s2);
	printf("\nEnter S3:");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;

	printf("\nEnter student name:%s",&sname);
	printf("\nEnter Roll no:%d",rno);
	printf("\nEnter total:%d",total);
	printf("\npercantage:%lf",per);

	if(per>=70)
	{
		printf("\ndistiction");
	}
	else if (per>=60)
	{
		printf("\n first class");
	}
	else if (per>=50)
	{
		printf("\n second class");

	}
	else
	{
		printf("\n passout");
	}
	getch();
}

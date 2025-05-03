#include<stdio.h>
#include<conio.h>

void main()
{
	int rno,s1,s2,s3,total;
	double per;
	char sname[50];
	clrscr();
	printf("\nEnter Student Name:");
	gets(sname);
	printf("\nEnter Roll No:");
	scanf("%d",&rno);
	printf("\nEnter S1:");
	scanf("%d",&s1);
	printf("\nEnter S2:");
	scanf("%d",&s2);
	printf("\nEnter S3:");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;

	printf("\nEnter Student name: %s",&sname);
	printf("\nEnter Roll no:%d",rno);
	printf("\n total:%d",total);
	printf("\n percantage:%lf",per);

	if(per>=70);
	{
		printf("\n Disction");

	}
	else if(per>=60);
	{
		printf("\n First class");
	}
	else if(per>=50);
	{
		printf("\n Second class");
	}
	else

	{
		printf("\n Passot");
	}
	getch();
}

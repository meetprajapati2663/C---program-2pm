#include<stdio.h>
#include<conio.h>

union Student
{
	int rno;
	char *sname;
	double per;
};
void main()
{
	union Student s;
	clrscr();
	printf("\n Enter Student Name:");
	gets(s.sname);
	printf("\n Enter Roll No:");
	scanf("%d",&s.rno);
	printf("\n Enter Percentage:");
	scanf("%lf",&s.per);

	printf("\n Student Name :%s",s.sname);
	printf("\n Student Roll No :%d",s.rno);
	printf("\n Student Percatnage:%lf",s.per);

	getch();


}
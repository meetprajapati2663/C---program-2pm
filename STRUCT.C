#include<stdio.h>
#include<conio.h>

struct Student
{
	int rno;
	char *sname;
	int s1,s2,s3,total,per;
};
void main()
{
	struct Student *s;
	clrscr();
	printf("\n Enter Roll No:");
	scanf("%d",&s->rno);
	fflush(stdin);
	printf("\n Enter Stduent Name :");
	gets(s->sname);
	printf("\n Enter Marks Of Subject 1:");
	scanf("%d",&s->s1);
	printf("\n Enter Marks Of Subject 2 :");
	scanf("%d",&s->s2);
	printf("\n Enter Marks Of Subject 3 :");
	scanf("%d",&s->s3);
	s->total=s->s1+s->s2+s->s3;
	s->per=s->total/3;
		if(s->per>=70)
		{
			printf("\n Desction");
		}
		else if(s->per>=60)
		{
			printf("\n First class");
		}

		else if(s->per>=50)
		{
			printf("\n Second class");
		}

		else
		{
			printf("\n Passout");

		}
	getch();
}
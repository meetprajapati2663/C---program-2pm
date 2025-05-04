#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[50],s2[50],s3[50];
	int l1,x;
	clrscr();
	printf("\n Enter String 1:");
	gets(s1);
	printf("\String 1 :%s",s1);
	l1=strlen(s1);
	printf("\n String 1 is length is:%d",l1);
	printf("\n Enter String 2 :");
	gets(s2);
	printf("\n String 2 :%s",s2);
	strcat(s1,s2);
	printf("\n After string 1 is concation:%s",s1);
	strcpy(s3,s1);
	printf("\n After string 3 is copy:%s",s3);
	x=strcmp(s1,s2);
	if(x==0)
	{
		printf("\n s1 & s2 is equal");
	}
	else
	{
		printf("\n s1 & s2 is diffrent");
	}
	strrev(s1);
	printf("\n After s1 reverse String %s",s1);
	getch();
}
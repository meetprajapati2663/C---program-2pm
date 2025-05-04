#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
     char s1[50],s2[50],s3[50];
     int l1,x;
     clrscr();
     printf("\nEnter String 1:");
     gets(s1);
     printf("\nString 1:%s",s1);
     l1=strlen(s1);
     printf("\nLength Of string 1 Is  :%d",l1);
     printf("\nEnter  String 2 :");
     gets(s2);
     strcat(s1,s2);
     printf("\nAfter Concatnation String 1 Is %s",s1);
     strcpy(s3,s1);
     printf("\nAfter Copy String 3 Is :%s",s3);
     x=strcmp(s1,s2);
     if(x==0)
     {
	printf("\nString s1 & s2 are equal");
     }
     else
     {
	printf("\nString s1 & s3 are diffrent");
     }
     strrev(s1);
     printf("\nAfter Reverse String 1 Is %s",s1);
     getch();
}
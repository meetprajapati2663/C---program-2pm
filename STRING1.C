#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	   char s1[50],s2[50];
	   int x;
	   clrscr();
	   printf("\n Enter String 1:");
	   gets(s1);
	   strcpy(s2,s1);
	   strrev(s1);
	   x=strcmp(s1,s2);
	   if(x==0)
	   {
		printf("\nGiven String palidrom");
	   }
	   else
	   {
		printf("\nGiven String not palidrom");
	   }
	   getch();
}
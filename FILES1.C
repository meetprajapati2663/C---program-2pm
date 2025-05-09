#include<dos.h>
#include<stdio.h>
#include<conio.h>

void main()
{
	       FILE *fp;
	       char *s1,*s2,c;
	       int i;
	       clrscr();
	       fp=fopen("MEET1.txt","w");
	       s1="Meet Prajapati";
	       for(i=0;s1[i]!='\0';i++)
	       {
		fputc(s1[i],fp);
	       };
	       fclose(fp);

	       fp=fopen("MEET1.txt","r");
	       do
	       {
			c= fgetc(fp);

			if(feof(fp))
			{
				break;

			}
			delay (100);
			printf("%c",c);
	       }while(1);
	       fclose(fp);
	       getch();
}
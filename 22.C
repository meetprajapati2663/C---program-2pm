#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	clrscr();
	printf("\nEnter A:");
	scanf("%d",&a);
	printf("\nEnter B:");
	scanf("%d",&b);
	printf("\n\n1.Addition:");
	printf("\n\n2. Subtraction:");
	printf("\n\n3. Multiplication:");
	printf("\n\n4.Division:");
	printf("\n\n Enter Your Choice:");
	scanf("%d",&d);

	switch(d)
	{
		case 1:
			c=a+b;
			printf("\nAddition:%d",c);
			break;

		case 2:
			c=a-b;
			printf("\nSubtraction:%d",c);
			break;

		case 3:
			c=a*b;
			printf("\nMultiplication:%d",c);
			break;

		case 4:
			c=a/b;
			printf("\nDivision:%d",c);
			break;

		default :
			printf("\n Invalid Choice");

	}
	getch();
}
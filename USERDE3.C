#include<stdio.h>
#include<conio.h>

int createSum(int arr[],int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
void main()
{
	int size=5,i;
	int a[5],sum;
	clrscr();
	printf("\nEnter Array Element\n");
	for(i=0;i<size;i++)
	{
		printf("\n Enter %d Element:",i);
		scanf("%d",&a[i]);

	}
	sum=createSum(a,size);
	printf("\n Sum of Array Elements :%d",sum);
	getch();



}
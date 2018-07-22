#include<stdio.h>
#include<conio.h>
int main()
{
	int n,k=10,sum=0;
	clrscr();
	printf("Enter the number:\n");
	scanf("%d",&n);
	sum+=n%k;
	n=n/k;

	sum+=n%k;
	n=n/k;

	sum+=n%k;
	n=n/k;

	sum+=n%k;
	n=n/k;

	sum+=n%k;
	n=n/k;

	printf("The sum of digits=%d",sum);

	getch();
}
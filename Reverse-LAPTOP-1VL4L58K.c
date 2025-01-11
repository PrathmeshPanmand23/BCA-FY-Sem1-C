/*Reverse Number of Given number*/
#include<stdio.h>
int main()
{
	int r,rev=0,n;
	printf("Enter any number\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("Reverse=%d\n",rev);
	return;
}

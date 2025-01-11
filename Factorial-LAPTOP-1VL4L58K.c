/*Factorial of given number*/
#include<stdio.h>
int main()
{
	int a,f=1,n;
	printf("Enter any Number\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		f=f*a;	
	}
	printf("Factorial=%d\n",f);
	return ;
}

/*Number is Prime or Not*/
#include<stdio.h>
int main()
{
	int a,n,flag=1;
	printf("Enter Any Number\n");
	scanf("%d",&n);
	a=2;
	while(a<n)
	{
		if(n%a==0)
		flag=0;
		break;
	}
	a++;
	if(flag==1)
	{
		printf("%d number is prime\n",n);
	}
	else
	{
		printf("%d number is not prime\n",n);
	}
	return ;
}

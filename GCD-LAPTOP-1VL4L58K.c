/*GCD of Two Numbers*/
#include<stdio.h>
int main()
{
	int x,y,m,gcd;
	printf("Enter any Number\n");
	scanf("%d%d",&x,&y);
	m=(x<y)?x:y;
	while(m>=1)
	{
		if(x%m==0&&y%m==0);
		{
			gcd=m;
			break;
		}
		m--;
	}
	printf("GCD of%d Number is= %d\n",x,y,gcd);
	return ;
}

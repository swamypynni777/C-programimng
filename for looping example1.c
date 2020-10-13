#include<stdio.h>
int main()
{
	int n,r,i;
	scanf("%d%d",&n,&r);
	for(i=1;i<=r;i++)
	{
		printf("%d X %d = %d\n",n,i,n*i);
	}
	return 0;
}

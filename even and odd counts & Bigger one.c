#include<stdio.h>
int main()
{
	int n,r,t,c=0,ec=0,oc=0;
	scanf("%d",&n);
	t=n;
	while(n)
	{
		r=n%10;
		r=n/10;
		if(r%2==0)
		{	
			ec++;
		}
		else
		{
			oc++;
		}
	}
	printf("even count :%d\n",ec);
	printf("odd count :%d\n",oc);
	if(ec>oc)
	{
		printf("even count is Bigger");
	}
	else
	{
		printf("odd count is Bigger");
	}
	return 0;
}

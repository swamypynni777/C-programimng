#include<stdio.h>
void multiplication_of_two_numbers(int n,int r)
{
	int i;
	for(i=1;i<=r;i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
int main()
{
	int n,r;
	scanf("%d%d",&n,&r);
	multiplication_of_two_numbers(n,r);
}

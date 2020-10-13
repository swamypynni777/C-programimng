 #include<stdio.h>
 int main()
 {
 	int n,r,t;
 	scanf("%d",&n);
 	t=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		printf("%d ",r);
	}
 	return 0;
 }

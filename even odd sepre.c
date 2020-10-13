#include<stdio.h>
void even_odd_num(int num)
{
    int r,even=0,odd=0;
    while(num)
    {
    	r=num%10;
		num=num/10;
		if(r%2==0)
		{	
			even=even*10+r;
		}
		else
		{
			odd=odd*10+r;
		}	
    }
  	printf("%d %d",even,odd);  
}

int main()
{
	int num,r,t,c=0,ec=0,oc=0;
	scanf("%d",&num);
	even_odd_num(num);
	return 0;
}


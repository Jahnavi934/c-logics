#include<stdio.h>
void main()
{
	int num,i,fac;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	}
}

#include<stdio.h>
void main()
{
	int num,i,fac=1;
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		fac=fac*i;
	}
	printf("%d ",fac);
	
}

#include<stdio.h>
void main()
{
	int n,r,count=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("%d ",r);
		count=count+1;
		n=n/10;
	}
	printf("\n%d",count);
}

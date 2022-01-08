#include<stdio.h>
void main()
{
	int n, r,even=0,odd=0,zero=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r==0)
		{
			zero++;
		}
		else if(r%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		n=n/10;
	}
	printf("%d\n%d\n%d",zero,even,odd);
}

#include<stdio.h>
int main()
{
	int num,i,sum=0;
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}

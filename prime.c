#include<stdio.h>
void main()
{
	int num,i,count=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
	
	{
		count=count+1;	
	}
}
	if(count==2)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}

}

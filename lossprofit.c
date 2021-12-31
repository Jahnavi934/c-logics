#include<stdio.h>
void main()
{
	int cp,sp,loss,profit;
	float lossp,profitp;
	printf("enter cp and sp");
	scanf("%d%d",&cp,&sp);
	loss=cp-sp;
	profit=sp-cp;
	lossp=loss*100/cp;
	profitp=profit*100/cp;
	if(cp>sp)
	{
		printf("loss");
	    printf("\n amount of loss %d",loss);
	    printf("\n loss of percentage %f",lossp);
	}
	else if (sp>cp)
	{
	printf("profit");
	printf("\n amount of profit %d",profit);
	printf("\n profit of percentage %d",profitp);
}
}

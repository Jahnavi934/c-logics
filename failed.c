#include<stdio.h>
void main()
{
	int  mat,phy,chem,cs;
	printf("enter the marks of 4");
	scanf("%d%d%d%d",&mat,&phy,&chem,&cs);
	if(mat<35)
	{
		printf("failed in mat");
	}
	 if(phy<35)
	{
		printf("\nfailed in phy");
	}
	 if(chem<35)
{
	printf("\nfailed in chem");
}
      if(cs<35)
     {
     	printf("\nfailed in cs");
	 }
}

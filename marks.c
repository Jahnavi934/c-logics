#include<stdio.h>
void main()
{
	int marks;
	printf("enter marks");
	scanf("%d",&marks);
	if(marks>100)
	{
		printf("invalid marks");
	}
	else if(90<=marks&&marks<=100)
	{
     printf("o grade");
 }
 else if(80<=marks&&marks<90)
{
	printf("a grade");
}
 	else if(70<=marks&&marks<80)
 	{
 		printf("b grade");
	 }
     else if(60<=marks&&marks<70)
     {
     	printf("c grade");
	 }
	 else if(50<=marks&&marks<60)
	 {
	 	printf("d grade");
	 }
	 else if(marks<50)
	 {
	 	printf("fail");
	 }

}

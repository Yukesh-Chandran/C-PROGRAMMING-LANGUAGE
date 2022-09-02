#include<stdio.h>
int main()
{
	int a , b;
	printf("Enter number 1:");
	scanf("%d",&a);
	printf("Enter number 2:");
	scanf("%d",&b);
	if(a==b)
	{
		printf("Both number 1 and number 2 are Equal");
	}	
	else
	{
		if(a>b)
		{
			printf("number 1===> %d is greater",a);
		}
		else
		{
			printf("number 2===> %d is greater",b);
		}
	}
	return 0 ;
}

#include<stdio.h>
int main()
{
	int a[5] [5];
	int r,c,m,n;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of columns:");
	scanf("%d",&n);
	printf("Enter %d Elements",m*n);
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		scanf("%d",&a[r][c]);
	}
	for(r=0;r<m;r++)
	{
		printf("\n");
		for(c=0;c<n;c++)
		printf("%d\t",a[r][c]);
	}
	printf("\n");
}

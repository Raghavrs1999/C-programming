#include<stdio.h>
int main()
{
	int i,j,a[3][4];
	printf("Enter the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter element %d,%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nOutput\n Before:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");	
	}
	printf("\nAfter:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[j][i]);
		}
		printf("\n");
		
	}
}

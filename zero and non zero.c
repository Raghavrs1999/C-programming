#include<stdio.h>
int main()
{
	int i,j,a[3][4],zero=0,nonz=0;
	printf("Enter the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter element %d,%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			{
				zero++;
			}
			else
			{
				nonz++;
			}
		}
	}
	printf("\nOutput\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");	
	}
	printf("%d are zeros.",zero);
	printf("\n%d are non zero",nonz);
}

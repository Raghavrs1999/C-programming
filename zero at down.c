#include<stdio.h>
int main()
{
	int i,j,a[3][3],x;
	printf("Enter the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter element %d,%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
     	}
	}
	//process
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				x=i;
				x=x-1;
				for(x;x>=0;x--)
				{
					a[i][x]=0;
				}
			}
		}
	}
	printf("\nOutput\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");	
	}
}

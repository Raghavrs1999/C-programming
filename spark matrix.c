#include<stdio.h>
int main()
{
	int a[3][3],i,j,count=0;
	//input
	printf("Enter the values:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %d,%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	//process
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>0)
			{
				count++;
			}
			else
			{
				count--;
			}
		}
	}
	//output
	printf("\nOutput\n");
	if(count<0)
	{
		printf("Matrix is sparks");
	}
	else if(count>0)
	{
		printf("Matrix is not sparks");
	}
}

#include<stdio.h>
int main()
{
	int a[3][4],i,j,k,x;
	//input
	printf("Enter the elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter %d,%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	//process
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{

			for(k=0;k<3;k++)
			{
			    if(a[i][j]<a[i][k])
			    {
			    	x=a[i][j];
				    a[i][j]=a[i][k];
				    a[i][k]=x;
			    }
			}
		}
	}
	//output
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}

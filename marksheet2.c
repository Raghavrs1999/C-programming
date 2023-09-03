#include<stdio.h>
int main()
{
	int i,j,a[10][6],x,y,percent,top=0,z,c;
	printf("Enter the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter element %d,%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
     	}
	}
	//process
		for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			if(j==3)
			{
				x=j;
				y=a[i][x];
				for(x;x>1;x--)
				{
					y=y+a[i][x];
				}
				y=y-3;
				a[i][4]=y;
	 		percent=y/300;
				a[i][5]=percent;
			}
		}
	}
	// finding topper
	top=a[0][5];
	for(j=0;j<3;j++)
	{
		for(i=1;i<3;i++)
		{
			if(top<a[j][i])
			{
				top=a[j][i];
			}
		}
	}
	c=j;
	z=i;
	printf("\nOutput\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");	
	}
	printf("Topper is:%d\n",z+1);
	for(z=0;z<6;z++)
	{
		printf("|%d|",a[c][z]);
	}

}

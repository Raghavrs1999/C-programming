#include<stdio.h>
int main()
{
	int i,j,a[10][6],x,y,percent,top=0,z,c;
	printf("Enter the details of marksheet:\n");
	for(i=0;i<3;i++)
	{
		printf("Enter the roll No.: ");
		scanf("%d",&a[i][0]);
		printf("Enter the m1 m2 m3 : ");
		scanf("%d%d%d",&a[i][1],&a[i][2],&a[i][3]);
	}
	//process
		for(i=0;i<3;i++)
    	{
    		a[i][4]=0;
		for(j=1;j<4;j++)
		{
			a[i][4]+=a[i][j];
    	}
		a[i][5]=a[i][4]/3.0;
		}
	
	
	// finding topper
	top=a[0][5];
	for(i=1;i<3;i++)
	{
		if(top<a[i][5])
		{
	 		top=a[i][5];
	 		z=i;
		}
	}

	printf("\nOutput\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");	
	}
	printf("Topper is:%d\n|",z+1);
	for(i=0;i<6;i++)
	{
		printf(" %d |",a[z][i]);
	}

}

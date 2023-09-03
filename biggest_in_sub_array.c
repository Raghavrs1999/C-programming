#include<stdio.h>
int main()
{
	int a[50],n,i,j,size,big;
	//input 
	printf("Enter the size of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the size of sub array:");
	scanf("%d",&size);
		//process
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
			big=a[i];
		if(i+size<=n)
		{
			
		for(j=i;j<size+i;j++)
		{
		
			printf("%3d",a[j]);
			if(a[j]>big)
			{
				big=a[j];
			}
		
		}
			printf("\t%d\n\n",big);
		}
	}
	
}

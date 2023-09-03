#include<stdio.h>
int main()
{
	int a[5],i,j,n=5;
	printf("Enter the value:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("output:");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;				
			}
		}

	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

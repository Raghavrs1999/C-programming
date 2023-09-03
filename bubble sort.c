#include<stdio.h>
int main()
{
	int a[50],i,j,n,t;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the %d number:",i+1);
		scanf("%d",&a[i]);
	}
	//process
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}

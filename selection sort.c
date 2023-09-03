#include<stdio.h>
int main()
{
	int a[50],i,j,n,min,t;
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
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		if(min>0)
		{
			t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
	}

//output
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}

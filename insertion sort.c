#include<stdio.h>
int main()
{
	int a[50],i,n,t,k,temp;
	//input
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the %d number:",i+1);
		scanf("%d",&a[i]);
	}
	//process
	for(i=1;i<n;i++)
	{
		temp=a[i];
		k=i-1;
		//t=a[i+1];
		while(k>=0 && temp<a[k])
		{
			a[k+1]=a[k];
			k--;
		}
		a[k+1]=temp;
		
		}
		
	
	//output
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}

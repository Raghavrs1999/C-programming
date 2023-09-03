#include<stdio.h>
int main()
{
	int i,j,sum=0,count=0,a[20],avg,n;
	
	printf("Enter elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		count++;
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=(float)sum/count;
	printf("Sum of all element in array is:%d",sum);
	printf("\nAverage is :%d",avg);
	
}

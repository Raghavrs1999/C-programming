#include<stdio.h>
int main()
{
	int i,a[10],count=0,sum;
	printf("Enter the elements:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nOutput\n");
	for(i=-1;i<10;i++)
	{
		if(count==2)
		{
			sum=a[i-1]+a[i];
			printf("%d\n",sum);
			count=0;
		}
		count++;
	}
}

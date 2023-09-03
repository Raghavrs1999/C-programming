#include<stdio.h>
void main()
{
	int i,j,a[5];
	printf("Please enter the values:");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	  
	j=a[0];
	
	for(i=0;i<5;i++)
	{
		if(a[i]>j)
		{
			j=a[i];
		}
	}
	
	printf("%d is the largest number in array",j);
}

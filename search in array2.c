#include<stdio.h>
int main()
{
	int i,a[5],s,count=0;
	printf("Enter the numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the number to search:");
	scanf("%d",&s);
	
	for(i=0;i<5;i++)
	{
		if(s==a[i])
		{
			count++;
		}
	}
	if(count!=0)
	{
		printf("%d found ",s);
	}
	else
	printf("Given number dosn't found");
}

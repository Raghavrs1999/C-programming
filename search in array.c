#include<stdio.h>
int main()
{
	int i,a[5],x;
	printf("Enter the value:\n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number for search:\n");
	scanf("%d",&x);
	printf("Output\n");
	for(i=0;i<5;i++)
	{
     if(x==a[i])
     {
     	printf("%d is in the array at %d",x,i+1);
     	break;
	 }
	}
	    if(x!=a[i])
	    {
     	printf("%d is not in the array",x);
		}
}

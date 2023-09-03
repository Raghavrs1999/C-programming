#include<stdio.h>
int main()
{
	int i,in,a[50],x,num,c=50;
	printf("Enter size of array:");
	scanf("%d",&num);
	printf("Enter the numbers:");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to insert in array:");
	scanf("%d",&in);
	printf("Enter the position to insert:");
	scanf("%d",&x);
	x=x-1;
	for(c;c>x;c--)
	{
		a[c]=a[c-1];
	}
	a[c]=in;
	printf("\nOutput\n");
	for(i=0;i<num+1;i++)
	{
		printf("%d,",a[i]);
 	}
 	printf("\b\b");
}

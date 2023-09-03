#include<stdio.h>
void traverse(int a[],int n);
int main()
{
	int a[100],n,i;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\noutput\n");
	traverse(a,n);
}
void traverse(int a[],int n)
{
	static int i;
    if(i==n)
    return ;
    
	
	printf("%d\n",a[i]);
	i++;
	traverse(a,n);
}

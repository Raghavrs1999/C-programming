#include<stdio.h>
int search(int a[],int n,int s);
int main()
{
	int a[100],n,i,s,p;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search:");
	scanf("%d",&s);
	p=search(a,n,s);
	if(p>=0)
	printf("Element %d found at %d",s,p);
	else
	printf("Not found");

}
int search(int a[],int n,int s)
{
	int i,p=-1;
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			p=i;
			break;
		}
	}
	return p;
}

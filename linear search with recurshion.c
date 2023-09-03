#include<stdio.h>
void search(int a[],int n,int s);
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
	search(a,n,s);
	if(p>=0)
	printf("Element %d found at %d",s,p);
	else
	printf("Not found");

}
void search(int a[],int n,int s)
{
	if(n>=0)
	{
		if(a[n]==s)
		return;
	}
	else
	{
	    return search(a,n-1,s);	
	}
}

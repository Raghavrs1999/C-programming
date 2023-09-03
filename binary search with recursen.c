#include<stdio.h>
int binary(int a[],int,int);
int t,out;
int main()
{
	int a[100],n,i,s,t;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&s);
	t=binary(a,n,s);
	
	if(t==1)
	{
		printf("%d found",s);
	}
	else if(t==-1)
    	printf("Word not found");
}
int binary(int a[],int n,int s)
{
	int m,l,f=0;
    l=n-1;
	while(f<n)
	{
		m=(f+l)/2;
		if(a[m]<s)
		{
			f=m+1;
			binary(a,n,s);
		}
		else if(a[m]>s)
		{
			l=m-1;
			binary(a,n,s);
		}
		else if(a[m]==s)
		{
		    return 1;
		}
		else
		return -1;	
	}
	
}

#include<stdio.h>
int main()
{
	int a[100],n,s,i,j,x,l,f=0,m;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&s);
	//process
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
		    {
			    x=a[j];
			    a[j]=a[j+1];
			    a[j+1]=x;
		    }
		}
	}*/
	l=n-1;
	while(f<n)
	{
		m=(f+l)/2;
		if(a[m]<s)
		{
			f=m+1;
		}
		else if(a[m]>s)
		{
			l=m-1;
		}
		else if(a[m]==s)
		{
		    printf("%d found",s);
		    break;
		}
		//i++;	
	}
	
}

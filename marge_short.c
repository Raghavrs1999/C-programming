#include<stdio.h>
#define pf printf
#define sf scanf
void marge(int a[],int f,int l);
void sort(int a[],int f,int l,int m);
int main()
{
	int i,a[50],n,l,f;
	//input
	pf("Enter the size of array a[]:");
	sf("%d",&n);
	for(i=0;i<n;i++)
	{
		pf("Enter a[%d]",i);
		sf("%d",&a[i]);
	}
	//process
	marge(a,0,n-1);
    for(i=0;i<n;i++)
	{
		pf(" %d ",a[i]);
	}

	
}
	void marge(int a[],int f,int l)
	{
		int m;
		if(f<l)
		{
			m=(f+l)/2;
			marge(a,f,m);
			marge(a,m+1,l);
			sort(a,f,l,m);
		}
		else
		return;
	}
void sort(int a[],int f,int l,int m)
	{
		int t[50],i,k,j;
		i=f;
		k=f;
		j=m+1;
		while(i<=m && j<=l)
		{
			if(a[i]<a[j])
				t[k++]=a[i++];
			else
				t[k++]=a[j++];
		}
		while(i<=m)
			t[k++]=a[i++];
		while(j<=l)
			t[k++]=a[j++];
		
		for(i=0;i<=l;i++)
			a[i]=t[i];
		
	}


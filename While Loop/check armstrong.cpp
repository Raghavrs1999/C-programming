#include<stdio.h>
int main()
{
	int n,d,m=0,l=0,num;
	printf("Enter the number:");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		m=d*d*d;
		l=l+m;
	}
	if(num==l)
	{
	printf("Given number is armstrong");
	}
	else
	{
	printf("Given number is not armstrong");	
	}
}

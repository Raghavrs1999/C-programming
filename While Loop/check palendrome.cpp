#include<stdio.h>
int main()
{
	int n,m,d,rev=0;
	printf("Enter the number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		rev=d+rev*10;
	}
	if(m==rev)
	{
		printf("Given number is palindrome");
	}
	else
	{
		printf("Given number is not palendrome");
	}
}

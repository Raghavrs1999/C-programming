#include<stdio.h>
int main()
{
	int n,d,a,sum,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		count++;
		if(count==1)
		{
			a=d;
		}
	}
	sum=a+d;
	printf("Sum of first and last digit is:%d",sum);
}

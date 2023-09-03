#include<stdio.h>
int main()
{
	int n,d,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		count++;
	}
	printf("%d digit number",count);
}

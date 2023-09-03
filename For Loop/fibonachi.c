#include<stdio.h>
int main()
{
	int i,a,b,c,l;
	printf("Fibonachi series:\nEnter the lavel:");
	scanf("%d",&l);
	a=0;b=1;
	printf("0");
	for(i=0;i<=l;i++)
	{
		c=a+b;
		b=a;
		a=c;
		printf(",%d",c);
	}
	
}

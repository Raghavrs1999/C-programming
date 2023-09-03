#include<stdio.h>
int main()
{
	int a,b,c,*x,*y;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	x=&a;
	y=&b;
	c=*x+*y;
	printf("Answer\n%d",c);
}

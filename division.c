#include<stdio.h>
int main()
{
	int a,b,c,*x,*y;
	printf("Enter the number to devide:");
	scanf("%d",&a);
	printf("Enter the number by which you devide:");
	scanf("%d",&b);
	x=&a;
	y=&b;
	//c=*x/ *y;
	printf("Answer\n%d",*x/ *y);
}

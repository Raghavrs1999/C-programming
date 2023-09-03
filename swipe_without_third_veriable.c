//Interchange any two value without any third variable 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a:");
    scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	a=a+b;
	a=a-b;
	b=a+b;
	b=b-a;
	printf("The inter changed value is:a=%d and b=%d",b,a);
}

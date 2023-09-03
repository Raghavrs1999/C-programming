//Factorial of any number
#include<stdio.h>
int main()
{
int i,n,m=1;
printf("Enter the number for factorial:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	m=m*i;
}
printf("%d!=%d",n,m);
}

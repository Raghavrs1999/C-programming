#include<stdio.h>
int main()
{
	int i=1,n,m=1;
	printf("Enter the number for factorial: ");
	scanf("%d",&n);
	while(i<=n)
	{
	 m=m*i;
	 i++;
    }
	printf("%d!=%d",n,m);  
}


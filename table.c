#include<stdio.h>
int main()
{
	int i,n,m;
	printf("Enter the Number for which you want the table:");
	scanf("%d",&i);
	for(n=1;n<=10;n++)
	{
	m=i*n;
	printf("%d*%d=%d\n",i,n,m);
    }
}


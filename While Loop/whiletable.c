#include<stdio.h>
int main()
{
	int i=1,x,A;
	printf("Enter the number for Table: ");
	scanf("%d",&x);
	while(i<=10)
	{A=i*x;
	printf("%d*%d=%d\n",x,i,A);
	i++;
	}
	
}

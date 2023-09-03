#include<stdio.h>
#include<math.h>
int main()
{
	int i,b,p,x;
	printf("Enter the Base:");
	scanf("%d",&b);
	printf("Enter the power range:");
	scanf("%d",&p);p--;
	printf("1");
	for(i=1;i<=p;i++)
	{
		x=pow(b,i);
		
		if(i%2==0)
		{
			printf("+%d",x);
		}
		else
		{
			printf("-%d",x);
		}
	}
}

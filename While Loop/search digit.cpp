#include<stdio.h>
int main()
{
	int n,d,dig,count=0,f=0;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the digit to find:");
	scanf("%d",&dig);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		count++;
		if(d==dig)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
    printf("%d is in the number at %d^th position form back",dig,count);
    }
	else
	{   
	printf("Digit not found");
    }
}

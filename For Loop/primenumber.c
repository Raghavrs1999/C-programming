#include<stdio.h>
int main()
{ 
int n,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++) 
	{
		if(n%i==0)
		{
		printf("Given no. is not a prime");
		break;
		}
	}
	if(i==n)
	{
		printf("Given no. is a prime");
		
    }
    return 0;
}

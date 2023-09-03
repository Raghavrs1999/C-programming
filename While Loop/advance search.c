#include<stdio.h>
int main()
{
	long long int n,d,dig,count=0,f=0,rev=0,k;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the digit to find:");
	scanf("%d",&dig);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		rev=d+rev*10;
	}
	while(rev>0)
	{
		k=rev%10;
		rev=rev/10;
		count++;
		if(k==dig)
    	{
		printf("%d ",count);
		f++;
	    }
	}
	
	if(f<=count)
	{
    printf(" are the position of %d. it come %d times",dig,f);
    }
	else
	{   
	printf("Digit not found");
    }
}

#include<stdio.h>
int main()
{
	int d,n,m,k,i,c=0;
	printf("Enter number:");
	scanf("%d",&n);
	k=n;
	while(n>0)
	{
		d=n%10;
		n=n/10;
        m=1;
		for(i=d;i>=1;i--)
		{
			m=m*i;
		}
		c=c+m;
	}
	printf("%d\n",c);
	if(k==c)
	{
	    printf("%d is strong number",c);	
	}
	else
	{
    	printf("%d is not strong number",c);
    }
}

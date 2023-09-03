#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
    {
    	l=i;
    	k=4;
    	for(j=i;j>=1;j--)
    	{
    		printf("%4d",l);
    		l=l+k;
    		k--;
		}
		printf("\n");
	}
}

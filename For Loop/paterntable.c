/*1
  2 4
  3 6 12*/
#include<stdio.h>
int main()
{
	int j,i,k,count=1;
	for(i=3;i>=1;i--)
	{
		k=count;
		for(j=3;j>=i;j--)
		{
			printf("%d",k);
			k=k+k;
		}
		count++;
		printf("\n");
	}
}

/*   1   2   3   4
     2   3   4   5
     3   4   5   6*/
#include<stdio.h>
int main()
{
	int i,j,k=1,count=1;
	for(i=1;i<=3;i++)
	{
	k=count;
		for(j=1;j<=4;j++)
		{
			printf("%4d",k);
			k++;
		}
		count++;
		printf("\n");
	}
}

/* 1
   0 1
   0 1 0
   1 0 1 0 */
#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=k%2;
			printf("%2d",k);
			k++;
		}
		printf("\n");
	}
}

#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=0;i<=4;i++)
	{
		k=5;
		l=k-i;
		for(j=1;j<=5;j++)
		{
			if(l>5)
			l=5;
			printf("%4d",l);
			l++;
		}
		printf("\n");
	}
}

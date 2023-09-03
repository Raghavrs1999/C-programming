/*
1           1
  2       2
    3   3
      4
      */
#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		printf("%d",i);
		l=i;
		for(k=1;k<=8-2*i;k++)
		{
			printf(" ");
		}
		if(l==4)
		{
		}
		else
		{
			printf("%d",l);
		}
		printf("\n");
    }
	
}

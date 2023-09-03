#include<stdio.h>
int main()
{
	int i,a[5],positive=0,negative=0,zero=0;
	printf("Enter the elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>0)
		{
			positive++;
		}
		else if(a[i]<0)
		{
		    negative++;	
		}
		else
		{
			zero++;
		}
	}
	printf("Number of positive:%d\n",positive);
	printf("Number of Negative:%d\n",negative);
	printf("Number of Zero:%d",zero);
}

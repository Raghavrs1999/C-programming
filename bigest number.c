#include<stdio.h>
int main()
{
	int a[5],i,*p,big;
	printf("Enter elements of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	big=*p;
	printf("\nOutput\n");
	for(i=1;i<5;i++)
	{
		if(big<*(p+i))
		{
			big=*(p+i);
		}			
	}
	printf("Biggest number is: %d",big);
}

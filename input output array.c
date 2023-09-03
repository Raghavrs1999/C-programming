#include<stdio.h>
int main()
{
	int a[5],i,*p;
	printf("Enter elements of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	printf("\nOutput\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(p+i));
		printf("%d\n",*(a+i));
		printf("%d\n",*(i+a));
		printf("%d\n",i[a]);			
	}
}

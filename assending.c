#include<stdio.h>
int main()
{
	int a[5],i,j,*p,c;
	printf("Array\n");
	//input
	for(i=0;i<5;i++)
	{
		printf("Enter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	//process
	p=&a[0];
	printf("\nOutput\n");
    for(i=0;i<5;i++)
   {
		for(j=0;j<5;j++)
		{
			if(j[a]>j[a+1])
			{
				c=j[a+1];
				j[a+1]=j[a];
				j[a]=c;
			}
		}
	}
	//output
	for(i=0;i<5;i++)
	{
		printf("%d\n",i[a]);
	}
}

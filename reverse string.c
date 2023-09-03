#include<stdio.h>
#include<conio.h>
int main()
{
	char str1[20],rev[20];
	int count=0,i=0,j;
	printf("Enter something:");
	gets(str1);
	//process
	while(str1[i]!='\0')
	{
		count++;
		i++;
	}
	i=i-1;
	for(i,j=0;i>=0,j<=count;i--,j++)
	{
		rev[j]=str1[i];
	}
	//output
	printf("Reverse is:%s",rev);
}

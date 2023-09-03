#include<stdio.h>
#include<conio.h>
int main()
{
	char str[20];
	int count=0,i=0;
	printf("Enter the value:");
	gets(str);
	//process
	while(str[i]!='\0')
	{
		i++;
		count++;
	}
	//output
	printf("Length of string is:%d",count);
}

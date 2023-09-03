#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,count=0;
	char str1[50];
	printf("Enter somrthing:");
	gets(str1);
	//process
	while(str1[i]!='\0')
	{
		if(str1[i]==(' '))
		{
			count++;
		}
		i++;
	}
	//output
	printf("There are %d words.",count);
}

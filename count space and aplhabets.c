#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,space=0,alp;
	char str1[50];
	printf("Enter something:");
	gets(str1);
	//process
	while(str1[i]!='\0')
	{
		if(str1[i]==' ')
		{
			space++;
		}
		i++;
	}
	alp=i-space;
	//output
	printf("There are %d space and %d alphabets.",space,alp);
}

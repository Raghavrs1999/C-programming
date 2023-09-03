#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20],ch;
	int i=0,f;
	printf("Enter the 1st value:");
	gets(str1);
	printf("Enter the 2nd value:");
	gets(str2);
	while(str1[i]!='\0')
	{
		if(str1[i]!=str2[i])
		
		{
			f=1;
			break;
		}
	}
		if(f==0)
		{
			printf("given string is equal %s",str1);
		}
		else
		{
			printf("not equal");
		}
}

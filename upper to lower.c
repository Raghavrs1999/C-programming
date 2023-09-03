#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char str[20];
	printf("Enter something:");
	gets(str);
	//process
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;
			i++;
		}
		else
		{
			str[i]=str[i]-32;
			i++;
		}
	}
	//output
	printf("%s",str);
}

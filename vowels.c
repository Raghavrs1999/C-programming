#include<stdio.h>
#include<conio.h>
int main()
{
	int j,count=0,conc;
	char str[50];
	printf("Enter something:");
	gets(str);
	//process
	while(str[j]!='\0')
	{
		if(str[j]=='A'||str[j]=='a')
		{
			count++;
		}
		else if(str[j]=='E'||str[j]=='e')
		{
			count++;
		}
		else if(str[j]=='I'||str[j]=='i')
		{
			count++;
		}
		else if(str[j]=='O'||str[j]=='o')
		{
			count++;
		}
		else if(str[j]=='U'||str[j]=='u')
		{
			count++;
		}
		j++;
	}
	conc=j-count;
	printf("There are %d vowels and %d consonent in the string",count,conc-1);
}

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	int l;
	printf("Enter string:");
	gets(str1);
	l=strlen(str1);
	printf("Length is %d",l);
}

#include<stdio.h>
#include<string.h>
int main()
{
	int arr[20],i,j,n,m;
	char str[10],s[10],t[20];
	printf("Enter first string:");
	gets(str);
	m=strlen(str);
	printf("Enter second string:");
	gets(s);
	n=strlen(s);
	i=0;
	for(i=0;i<m;i++)
	{
		t[i]=str[i];

	}
	for(j=0;j<n;j++)
	{
		t[i]=s[j];
		i++;
	}
	printf("%s",t);
/*	char s[20],str[20];
	printf("Enter the first string:");
	gets(s);
	printf("Enter the second string:");
	gets(str);
	printf("Concatenated String: %s\n", strcat(s,str));*/
}

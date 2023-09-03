#include<stdio.h>
#include<string.h>
int main()
{
	int result; 
	char str1[20],str2[20],str3[20];
	printf("Enter the first string:");
	gets(str1);
	printf("Enter the second string:");
	gets(str2);
	printf("Enter the second string:");
	gets(str3);
	result=strcmp(str1,str2);
    printf("strcmp(str1 , str2) = %d\n",result);
	result=strcmp(str1,str3);
    printf("strcmp(str1 , str3) = %d\n",result);
}

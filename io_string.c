#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char str[20];
	printf("Enter string:");
//	scanf("%10s",str);
	gets(str);
    printf("%s",str);
/*	while(str[i]!='\0')
	{
		i++;
	}
	printf("\n%d",i);*/
	i=strlen(str);
	printf("%d",i);
}

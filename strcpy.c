#include<stdio.h>
#include<conio.h>
int main()
{
	char str1[20],str2[20];
	int i=0,count=0;
	printf("Enter something:");
	gets(str1);
	//process
	while(str1[i]!='\0')
	{
		i++;
		count++;
	}
	for(count;count>=0;count--)
	{
		str2[count]=str1[count];
	}
    //output
	printf("After copy: %s",str2);
}

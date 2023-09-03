#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],c;
	int i=0,n=0;
	printf("Enter string : ");
	gets(str);
	printf("\noriginal %s\n",str);
	n=strlen(str);
	while(str[i]!='\0')
	{
		//n++;
		if(i<n-1)
		{
			c=str[i];
			str[i]=str[i+1];
			str[i+1]=c;
		}
		i++;
	}
	//printf("\nout\n");
		printf("\noutput  %s",str);
	
}

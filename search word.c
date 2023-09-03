#include<stdio.h>
#include<conio.h>
int main()
{
	char str[50],search[50];
	int i,j=0,c=0,s=0,k,p,flag=0;
	printf("Enter something:");
	gets(str);
	printf("Enter the word to search:");
	gets(search);
	//process
	while(str[c++]!='\0');
	
	while(search[s++]!='\0');
	c--;s--;
	//printf("len1 : %d\tlen2 : %d\n",c,s);
	for(i=0;i<c;i++)
	{
		k=i;j=0;
		if(str[i]==search[j])
		{
			//p=k;
			//printf("\t%c\t",str[k]);
			while(search[j]!='\0')
			{
				if(str[i]==search[j])
				{
					j++;
					i++;
				}
				if(j==s)
				{
					flag=1;
					break;
				}	
			}
			if(flag==1)
			{
				p=k;goto fl;
			}
		}
		i=k;
	}
	fl:
	if(flag==1)
	{
		printf("Word is in the string at %d",p);
	}
	else
	{
		printf("Word is not in the string");
	}
}

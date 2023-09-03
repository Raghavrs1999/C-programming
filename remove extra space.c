#include<stdio.h>
#include<string.h>
int main ()
{   char str[80];
    int i=0,length,j,k;
    printf("Enter a string :");
    gets(str);
    //process
    //length=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
    	k=i;
        if(str[k]==' ' && str[k+1]==' ')
        {
            while(str[k]!='\0')
            {
            	str[k]=str[k+1];
            	k++;
			}
			//printf("\n%d-%d--%s\n",k,i,str);
			str[--k]='\0';
			i--;
		//ength--;
        }
    }
    //output
    printf(	"Resultant string :%s ",str);
}

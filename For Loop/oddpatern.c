/*1357
  135 
  13
  1
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=7;i>=1;i=i-2)
	{
		for(j=1;j<=i;j=j+2)
		{
		printf("%2d",j);	
		}
		printf("\n");
	}
}

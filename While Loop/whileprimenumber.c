#include<stdio.h>
int main()
{  
    int i=2,n,f=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(i<=10)
	{
	if(n%i==0)
	{
    f++;
	}
	i++;
    }
    
    if(f==2||f>=2)
    {
    printf("%d is not prime number.",n);
	}
    else
	{
	printf("%d is a prime number.",n);
	}
    
}

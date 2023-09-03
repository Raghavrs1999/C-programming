#include<stdio.h>
void fibo(int);
int main()
{
	int n;
	printf("Enter the lavel for fibonacci series:");
	scanf("%d",&n);
	printf
	//printf("1");
	fibo(n);
}
void fibo(int n)
{
	static int a=0,b=1,c,k=1;
	if(n<1)
	return ;
	c=a+b;
	a=b;
	b=c;
	printf("\t%d",c);
	//	k++;
    return fibo(n-1);

}

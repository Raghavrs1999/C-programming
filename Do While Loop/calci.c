#include<stdio.h>
int main()
{
	int ch,a,b;
	char f;
	printf("Enter two no: ");
	scanf("%d%d",&a,&b);
	do{
		printf("\nEnter 1 for'+':");
		printf("\nEnter 2 for'-':");
		printf("\nEnter 3 for'*':");
		printf("\nEnter 4 for'/':");
		printf("\nenter 5 exit\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
		case 1:
			printf("\nenter no is:%d\n",a+b);
			break;
		case 2:
			printf("\nenter no is:%d\n",a-b);
			break;
        case 3:
         	printf("\nenter no is:%d\n",a*b);
         	break;
        case 4:
     	  	printf("\nenter no is:%d\n",a/b);
     	case 5:
		   	printf("Good bye");
		   	break;
		default:    	 		
		    printf("Invalid entry");
		}
		if(ch==5)
		break;
		printf("If you want to continue press (y)\nIf you want to exit press (n)\n");
		fflush(stdin);
		scanf("%c",&f);
	} 
	while(f!='n');
	
}

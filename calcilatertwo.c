//Calculator
#include<stdio.h>
int main()
{
int start,a,b,s;
float k,A,B ;

 printf("Enter your choise given below:");
 printf("\n1.Addition of two numbers.");
 printf("\n2.Subtraction of two numbers.");
 printf("\n3.Multiplecation of two numbers.");
 printf("\n4.Division of two numbers.\n");
 scanf("%d",&start);
 
 
 switch(start)
 {
 	case 1:
 		{
 			printf("\nSo you want to do Addition");
 			printf("\nEnter the first number:");
 			scanf("%d",&a);
 			printf("Enter the second number:");
 			scanf("%d",&b);
 			s=a+b;
 			printf("Your answer is %d",s);
 			break;
    	}
    case 2:
    	{
    	    printf("\nSo you want to do Substraction");
 			printf("\nEnter the first number:");
 			scanf("%d",&a);
 			printf("Enter the second number:");
 			scanf("%d",&b);
 			s=a-b;
 			printf("Your answer is %d",s); 
			break; 	
    	} 
	case 3:
	    {
		printf("\nSo you want to do Multiplecation");
 			printf("\nEnter the first number:");
 			scanf("%d",&a);
 			printf("Enter the second number:");
 			scanf("%d",&b);
 			s=a*b;
 			printf("Your answer is %d",s);
 			break;
    	}
	case 4:
    	{
		printf("\nSo you want to do Division");
 			printf("\nEnter the first number:");
 			scanf("%f",&A);
 			printf("Enter the second number:");
 			scanf("%f",&B);
 			k=A/B;
 			printf("Your answer is %f",k);
 			break;
        }
	default:
		{
		printf("Please enter valid input");
	    }
    }

}
		
	
		
	



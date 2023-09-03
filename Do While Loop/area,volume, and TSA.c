#include<stdio.h>
#include<math.h>
int main()
{
	int Start;
	float l,b,h,s,r,a,S,A,B,C,c;
	char f;
	do{
	printf("\nFor which shape you want to calculate area,volume and total surface area\n");
	printf("1.Square");
	printf("\n2.Rectangle");
	printf("\n3.Circle");
	printf("\n4.Trapezium");
	printf("\n5.Triangle");
	printf("\n6.Cube");
	printf("\n7.Cuboide ");
	printf("\n8.Sphere");
	printf("\n9.Cylender");
	printf("\n10.Cone");
	printf("\n11.Hamisphere");
	printf("\n12.Exit\n");
	scanf("%d",&Start);
	switch(Start)
	{
	case 1:

		printf("\nSoo you have chosen Square");
		printf("\nEnter the length:");
		scanf("%f",&l);
		a=l*l;
		printf("Area of square is %f",a);
		printf("\nSquare is 2D figure so it dosent have any volume.");
		break;
	
	case 2:
	  
	   	printf("\nSoo you have chosen Rectangle");
		printf("\nEnter the length:");
		scanf("%f",&l);
		printf("Enter the width:");
		scanf("%f",&b);
		a=l*b;
		printf("Area of Ractangle is %f",a);
		printf("\nRectangle is 2D figure so it dosent have any volume.");
		break; 
	
	case 3:
		
		printf("\nSoo you have chosen Circle");
		printf("\nEnter the Redius:");
		scanf("%f",&r);
		a=3.14*r*r;
		printf("Area of Circle is %f",a);
		c=2*3.14*r;
		printf("\nCircumference of Circle is: %f",c);
		printf("\nCircle is 2D figure so it dosent have any volume.");
		break;
		
	case 4:
		
		printf("\nSoo you have chosen Trapezium ");
		printf("\nEnter the length of upper base:");
		scanf("%f",&l);
		printf("Enter the length of lower base:");
		scanf("%f",&b);
		printf("Enter the hight:");
		scanf("%f",&h);
		a=((l*b)/2)*h;
		printf("\nArea Trapezium of  is %f",a);
		printf("\nTrapezium is 2D figure so it dosent have any volume.");
		break;
		
	case 5:
		
	    printf("\nSoo you have chosen Triangle");
		printf("\nEnter the length of side 1 :");
		scanf("%f",&A);
		printf("Enter the length of side 2 :");
		scanf("%f",&B);
		printf("Enter the length of side 3 :");
		scanf("%f",&C);
		S=(A+B+C)/2;
		a=(float)(sqrt(S*(S-A)*(S-B)*(S-C)));
		printf("Area of Triangle is %f",a);
		printf("\nTriangle is 2D figure so it dosent have any volume.");
		break;
		
	case 6:
	     
	   	printf("\nSoo you have chosen Cube");
		printf("\nEnter the length of a side:");
		scanf("%f",&l);
		a=6*l*l;
		printf("Area of Cube is= %f",a);
		a=l*l*l;
		printf("\nVolume is= %f ",a);
		printf("\nTotal surface area is = to Surface area");
		break; 
	   		
	case 7:
         
	   	printf("\nSoo you have chosen Cuboide");
		printf("\nEnter the length :");
		scanf("%f",&l);
		printf("Enter the width :");
		scanf("%d",&b);
		printf("Enter the hight:");
		a=2*l*l+2*b*b+2*h*h ;
		printf("Area of Cuboide is %f",a);
		a=l*b*h;
		printf("\nVolume is= %f",a);
		printf("\nTotal surface area is = to Surface area");
		break; 
			
	case 8:
		  
	   	printf("\nSoo you have chosen Sphere");
		printf("\nEnter the radius :");
		scanf("%f",&r);
		a=4*3.14*r*r;
		printf("Area of Sphere is %f",a);
		a=1.333333*3.14*r*r*r;
		printf("\nVolume is= %f",a);
		printf("\nTotal surface area = to surface area");
		break; 
		
	case 9:	
	
	    printf("\nSoo you have chosen Cylender");
		printf("\nEnter the radius :");
		scanf("%f",&r);
		printf("Enter the hight:");
		scanf("%f",&h);
		a=2*3.14*h*r;
		printf("\nArea of Cylender is %f",a);
		a=3.14*r*r*h;
		printf("\nVolume is= %f",a);
		s=h+r;
		a=2*3.14*r*s;
		printf("\nTotal surface area is= %f",a); 
		break; 
	
	case 10:
	
		printf("\nSoo you have chosen Cone");
		printf("\nEnter the radius :");
		scanf("%f",&r);
		printf("Enter the hight :");
		scanf("%f",h);
		l=sqrt(h*h*+r*r);
		a=3.14*l*r;
		printf("Curved surface area is=%f",a);
		s=l+r;
		a=3.14*r*s;
		printf("\nTotal surface area=%f",a);
		a=.3333*3.14*r*r*h;
		printf("\nVolume is= %f",a);
		break;
	
	case 11:
	
		printf("\nSoo you have chosen Hamisphere");
		printf("\nEnter the redius:");
		scanf("%f",&r);
		a=2*3.14*r*r;
		printf("Surface area is= %f",a);
		s=3*3.14*r*r;
		printf("\nTotal surface area is= %f",s);
		S=.6666*3.14*r*r*r;
		printf("\nVolume of hamisphere = %f",S);
		break;	
	case 12:
		
		printf("Good bye\n");
		break;
		
	default:
		
	    printf("Please enter valid input\n");
			
	}
	if(Start==12)
	break;
	
	printf("If you want to continue press (y)\nIf you want to exit press (n)\n");
	fflush(stdin);
	scanf("%c",&f);
    }
    while(f!='n');
}


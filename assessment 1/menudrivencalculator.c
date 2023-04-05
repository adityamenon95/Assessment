#include<stdio.h>
 main()
{
	int a,b,c,choice;
	printf("--------menu------\n\n");
	printf("1. addition \n");
	printf("2. subtraction \n");
	printf("3. multiplication \n");
	printf("4. division \n\n");
	
	printf("Enter Your choice : ");
	scanf("%d",&choice);
	
	printf("\nEnter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
		
	
		switch(choice){
		case 1:
			c=a+b;
			printf("\nAddition = %d",c);
			break;
		case 2:
			c=a-b;
			printf("\nSubtraction = %d",c);
			break;
		case 3:
			c=a*b;
			printf("\nMultiplication = %d",c);
			break;
		case 4:
			c=a/b;
			printf("\nDivision = %d",c);
			break;
		
		default:
			printf("invalid choice !!!!");
			break;
			
			
	}
	
	
}

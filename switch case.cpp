#include <stdio.h>
int main(){
	 int choice;
	 
	double num1, num2, result;
	do {
		printf("\n=====arithmetic calculator ===\n");
		printf("A.add \n");
		printf("B.sub \n");
		printf("C.mul \n");
		printf("D.div \n");
		printf("5.exit \n");
		printf("enter your choice (1-5): ");
		scanf("%d", &choice);
		switch(choice) {
		
            case 1:
			 printf("enter two number:");
			 scanf("%1f %f , &num1, &num2");
			 result =num1+num2;
			 printf("result: %.21f + %.21f = %21f\n", num1, num2, result); 
			 break;
			 
		    case 2:
			 printf("enter two number:");
			 scanf("%1f %f , &num1, &num2");
			 result =num1+num2;
			 printf("result: %.21f + %.21f = %21f\n", num1, num2, result); 
			 break;
			 
			 case 3:
			 printf("enter two number:");
			 scanf("%1f %f , &num1, &num2");
			 result =num1+num2;
			 printf("result: %.21f + %.21f = %21f\n", num1, num2, result); 
			 break;
			 
			 case 4:
			 printf("enter two number:");
			 scanf("%1f %f , &num1, &num2");
			 if (num2==0) {
			 	  printf("error: Div by zero is not allowed.\n");
			 }else{
			 result =num1+num2;
			 printf("result: %.21f/ %.21f = %21f\n", num1, num2, result);
		    }
		      break;
		      
		case 5:
		       printf("existing the program...\n");
			   break;
			default:
			       printf("invalid choice ! please enter a number between 1 and 2");
			}
		}   while (choice !=5);
		
		    return 0;
}

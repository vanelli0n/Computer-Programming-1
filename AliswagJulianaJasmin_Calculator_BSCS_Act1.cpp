// Calculator
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// October 15, 2020

#include <stdio.h>

using namespace std;

int main() {
  
    double n2, n3, n4, n6, n7, n8, n9;

    int n1, n5 = 0, ender = 0, d1, d2;

    while (ender != 7) {

		printf("\nHello! Welcome to Aliswag's Calculator!");
		
		printf("\n\n--------------------------------");

		printf("\n\nChoose an Operation to Execute:\n\nInput 1 for Addition \nInput 2 for Subtraction \nInput 3 for Multiplication \nInput 4 for Division \nInput 5 to Compute for the Total of 5 Values \nInput 6 to Compute for the Average of 4 Values \nInput 7 to Exit the Calculator");
    
		printf("\n\nInput the Operation's Command Number: ");    
    
    	scanf("%d", &n1);
  
    	switch (n1) {

        case 1:

            printf("\nInput the addend: ");

            scanf("%lf", &n2);

            printf("\nInput the addend: ");

            scanf("%lf", &n3);

            n4 = n2 + n3;

            printf("\nSum: %f", n4);

            printf("\n\nInput 7 to Exit the Calculator or Input Any Other Number to Start Again:  ");

            scanf("%d", &ender);

            break;

        case 2:

            printf("\nInput the minuend: ");

            scanf("%lf", &n2);

            printf("\nInput the subtrahend: ");

            scanf("%lf", &n3);

            n4 = n2 - n3;

            printf("\nDifference: %f", n4);

            printf("\n\nInput 7 to Exit the Calculator or Input Any Other Number to Start Again:  ");

            scanf("%d", &ender);

            break;

        case 3:

            printf("\nInput the factor: ");

            scanf("%lf", &n2);

            printf("\nInput the factor: ");

            scanf("%lf", &n3);

            n4 = n2 * n3;

            printf("\nProduct: %f", n4);

            printf("\n\nInput 7 to Exit the Calculator or Input Any Other Number to Start Again:  ");

            scanf("%d", &ender);

            break;

        case 4:

            printf("\nInput the dividend: ");

            scanf("%lf", &n2);

            printf("\nInput the divisor: ");

            scanf("%lf", &n3);

            n4 = n2 / n3;

            n2 + 0.5; d1 = (int)n1;

            n3 + 0.5; d2 = (int)n2;
            
            n5 = d1 % d2;

            printf("\nQuotient: %f", n4);

            printf("\nRemainder: %d", n5);            

            printf("\n\nInput 7 to Exit the Calculator or Input Any Other Number to Start Again:  ");

            scanf("%d", &ender);

            break;
            
        case 5:

            printf("\nInput the first value: ");

            scanf("%lf", &n2);

            printf("\nInput the second value: ");

            scanf("%lf", &n3);

            printf("\nInput the third value: ");

            scanf("%lf", &n4);

            printf("\nInput the fourth value: ");

            scanf("%lf", &n6);

            printf("\nInput the fifth value: ");

            scanf("%lf", &n7);
            
            n8 = n2 + n3 + n4 + n6 + n7;

            printf("\nTotal: %f", n8);

            printf("\n\nInput 7 to Exit the Calculator or Input Any Other Number to Start Again:  ");

            scanf("%d", &ender);

            break;

        case 6:

            printf("\nInput the first value: ");

            scanf("%lf", &n2);

            printf("\nInput the second value: ");

            scanf("%lf", &n3);

            printf("\nInput the third value: ");

            scanf("%lf", &n4);

            printf("\nInput the fourth value: ");

            scanf("%lf", &n6);

            n8 = n2 + n3 + n4 + n6;

			n9 = n8 / 4;

            printf("\nAverage: %f", n9);

            printf("\n\nInput 7 to Exit the Calculator or Input Any Other Number to Start Again:  ");

            scanf("%d", &ender);

            break;			            
			            
        case 7:

            printf("\nAre you sure you want to Exit the Calculator?");

            printf("\n\nInput 7 to Exit the Calculator or Input Any Other Number to Start Again:  ");
            
            scanf("%d", &ender);

			printf("\nThank You for Trusting Aliswag's Services!\n");
            
			break;            

        default:
            // If the operator is other than 1, 2, 3, 4 or 5, error message is shown
            printf("\nINCORRECT COMMAND");

            printf("\n\nInput 7 to Exit the Calculator or Input Any Other Number to Start Again:  ");

            scanf("%d", &ender);
            
	    }

    }
}

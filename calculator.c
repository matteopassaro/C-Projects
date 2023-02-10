/*
  This is a pretty simple code for a basic calulator in C.
  The only operations allowed are the ones of a basic calculator (+, -, *, /, ^).
  I will upgrade this program whenever I'll find a better way to do it.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double calculate(double firstOp, double secondOp, char operationChar); // Inizialize the function to calculate the operation
    double op1, op2;                                                      //  op1 and op2 are the two operands
    double result, firstResult;
    char operation;


    printf("Enter the first operand: ");
    scanf("%lf", &op1);
    
    while(1){
        printf("\nChoose the operation (+, -, *, /, ^) or 'q' to quit.\n");
        printf("--> ");
        scanf(" %c", &operation);
        
        if(operation == 'q' || operation == 'Q'){               // if the user inputs charchter 'q' or 'Q' the program ends
            break;
        }
        
        printf("Enter the next operand: ");
        scanf("%lf", &op2);

        puts("");  //it's just here to make a space between the lines
        result = calculate(firstResult, op2, operation);        // Here we send the operands and the operator to the function
        printf("%.2lf %c %.2lf = %.2lf", firstResult, operation, op2, result);
        op1 = result;         // Update the op1 so next time it will show the latest result operated with the number
        puts("");
    }
}

double calculate(double firstOp, double secondOp, char operationChar){          // The function just uses a switch case to 
    switch(operationChar){                                                      //  get the character value and returns the result
        case '+':
            return firstOp+secondOp;
            break;
     
        case '-':
            return firstOp-secondOp;
            break;

        case '*':
            return firstOp*secondOp;
            break;

        case '/':
            return firstOp/secondOp;
            break;

        case '^':
            return pow(firstOp, secondOp);
            break; 
    }
}

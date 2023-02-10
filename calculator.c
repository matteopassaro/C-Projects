/*
  This is a pretty simple code for a basic calulator in C.
  It can only do operations between two operands.
  The only operations allowed are the ones of a basic calculator (+, -, *, /, ^).
  I will upgrade this program whenever I'll find a better way to do it.
  The one thing I want to do as soon as possible is to find a way to do operations between multiple operands.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double calculate(double firstOp, double secondOp, char operationChar);
    double op1, op2;
    double result;
    char operation;


    printf("Enter the first operand: ");
    scanf("%lf", &op1);

    printf("Enter the second operand: ");
    scanf("%lf", &op2);

    printf("\nChoose the operation (+, -, *, /, ^)\n");
    printf("--> ");
    scanf(" %c", &operation);
    puts("");

    result = calculate(op1, op2, operation);    
    printf("%.2lf %c %.2lf = %.2lf", op1, operation, op2, result);

}

double calculate(double firstOp, double secondOp, char operationChar){
    switch(operationChar){
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

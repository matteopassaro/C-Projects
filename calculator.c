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
    float op1, op2;
    float result;
    char operation;


    printf("Enter the first operand: ");
    scanf("%f", &op1);

    printf("Enter the second operand: ");
    scanf("%f", &op2);

    printf("\nChoose the operation (+, -, *, /, ^)\n");
    printf("--> ");
    scanf(" %c", &operation);
    puts("");

    switch(operation){
        case '+':
            result = op1+op2;
            break;
        
        case '-':
            result = op1-op2;
            break;

        case '*':
            result = op1*op2;
            break;

        case '/':
            result = op1/op2;
            break;

        case '^':
            result = pow(op1, op2);
            break;
    }
    printf("%.2f %c %.2f = %.2f", op1, operation, op2, result);

}

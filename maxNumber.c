/*   This easy code asks the user to enter 10 numbers.
     Then it prints out the biggest number that the user entered   
                                                                    */

#include <stdio.h>

int main(){

    int i, number, max;

    printf("Enter an integer positive number: ");
    scanf("%d", &max);

    for(i = 1; i < 10; i++){
        printf("Enter an integer positive number: ");
        scanf("%d", &number);

        if(number > max){
            max = number;
        }
    }
    printf("%d", max);

}

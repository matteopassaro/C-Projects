/*
    This program recieves a temperature from the user and it converts it from Celsius to Fahrenheit and viceversa.
*/

#include <stdio.h>

int main(){
    double convert(double temperatureParameter, char optionParameter);
    double temperature, fahrenheit, celsius;
    char option;
    char ch = 248;     // It's the ASCII character °. I print it this way because
                      //  it doesn't always work when you directly printf("°");
    
    printf("What do you want to convert?\n");
    printf("1. Celsius to Fahrenheit.\n2. Fahrenheit to Celsius.\n");
    printf("Enter an option. ('1', '2' or 'q' to quit)\n--> ");

    scanf("%c", &option);

    switch(option){
        case '1':      // I don't know whether recieving a number as char is a good manner but it works fine
            printf("Enter the temperature to convert: ");
            scanf("%lf", &temperature);
            fahrenheit = convert(temperature, option);
            printf("%.2lf %cC = %.2lf %cF", temperature, ch, fahrenheit, ch);
            break;
       
        case '2':
            printf("Enter the temperature to convert: ");
            scanf("%lf", &temperature);
            celsius = convert(temperature, option);
            printf("%.2lf %cF = %.2lf %cC", temperature, ch, celsius, ch);
            break;
        
        case 'q' || 'Q':
            printf("Bye");
            break;
       
        default:
            printf("Invalid input.");
            break;

        return 0;

    }
}

double convert(double temperatureParameter, char optionParameter){
    
    if(optionParameter == '1'){
        return ((temperatureParameter*1.8) + 32);
    } 
    else{
        return ((temperatureParameter-32)* 0.5556);
    }
}  

#include<stdio.h>
#include<stdbool.h>
int main(){

    // char operator ;
    // double num1;
    // double num2;
    // double result;

    // printf("\nEnter the first number");
    // scanf("%lf ",&num1);

    // printf("Enter the second number");
    // scanf("%lf", &num2);

    // printf("\nEnter an operator");
    // scanf("%c", operator);

    // switch (operator)
    // {
    // case '+':
    //     result = num1 + num2;
    //     printf("The result is %lf", result);
    //     break;

    // case '-':
    //     result = num1 - num2;
    //     printf("The result is %lf", result);
    //     break;

    // case '*':
    //     result = num1 * num2;
    //     printf("The result is %lf", result);
    //     break;

    // case '/':
    //     result = num1 / num2;
    //     printf("The result is %lf", result);
    //     break;
    
    // default:
    //     printf("%c is not valid operator", operator);
    //     break;
    // }


    // AND logical operator &&
    // float temp = 25;
    // bool sunny = false;
    // if(temp >0 && temp < 30 && sunny)
    // {
    //     printf("the weather is good");
    // }

    // else if (temp < 0 || temp > 30 )
    // {
    //     printf("The weather is bad");
    // }
    
    // else{
    //     printf("IDK Lmao ");
    // }
    // return 0;

    // NOT logical operator (!)

    bool sunny = true;
    if (!sunny){
        printf("\nIt's sunny outside!");
    }
    
    else{
        printf("\n It's cloudy day");
    }
}
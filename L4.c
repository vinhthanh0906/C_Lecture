#include <stdio.h>
#include <ctype.h>

int main(){

    // Temperature convert temp

    char unit;
    float temp;

    printf("\nEnter the Temperature(C or F)");
    scanf("%c", &unit);

    unit = toupper(unit);





    // C -> F
    if (unit == 'C')
    {
        printf("\nEnter the temp in Celcius:");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32;
        printf("\nThe temp is currently in Fahrenheit is : %lf", temp);
    }

    // F -> C
    else if(unit == 'F')
    {
        printf("The temp is currently in F");
        scanf("%f", &temp);
        temp = (temp - 32) * 5/9;
        printf("\nThe Temperature in Celcius is %lf: ", temp);
    }

    else{
        printf(",please enter valid ");
    }
    return 0;


}
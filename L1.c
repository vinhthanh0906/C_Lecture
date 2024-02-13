// // Data type
// #include<stdio.h>
// int main()
// {
//     // char (%c)                // Singl echaracter
//     // char a[] = "Abc"         // array of character %s


//     float c = 3.12324;
//     double d = 3.12325343456345; // more precision but need more memory 

//     // printf("Float num = %0.15f\n", c);
//     // printf("Double num = %0.15lf\n", d);

//     const char f = 100 ;                 // range = -128 -> +127 %d or %c        
//     unsigned char g = 255;         // range = 0 -> +255 %d or %c 

//     short int i = 23345;
//     unsigned short int j = 60000 ;
//     printf("%d",j) ;
// }


// Circle circumference
#include<stdio.h>
int main()
{
    const double pi = 3.14;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the circle radius: ");
    scanf("%lf", &radius);

    circumference = 2 * pi * radius;
    area = pi * radius * radius ;
   
    // printf("\nThe circumference: %lf", circumference);
    printf("\nThe Area: %lf", area);

    return 0;
}
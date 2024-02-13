// // Circle circumference
// #include<stdio.h>
// int main()
// {
//     const double pi = 3.14;
//     double radius;
//     double circumference;
//     double area;

//     printf("\nEnter the circle radius: ");
//     scanf("%lf", &radius);

//     circumference = 2 * pi * radius;
//     area = pi * radius * radius ;
   
//     // printf("\nThe circumference: %lf", circumference);
//     printf("\nThe Area: %lf", area);

//     return 0;
// }






#include<stdio.h>
int main ()
{
    // double A;
    // double B;
    // double C;

    // printf("Enter side A: ");
    // scanf("%lf",&A);

    // printf("Enter side B: ");
    // scanf("%lf", &B);
    
    // C = sqrt(A*A + B*B);

    // printf("Side C: %lf",C);
    // return 0;


    
    // switch = A more  efficent alternative to using "else if " statements 
    //          allows a value to be tested for equality against many cases


    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

   switch (grade)
   {
   case 'A':
        printf("Perfect\n");
        break;
    
    case 'B':
        printf("You did good\n");
        break;

    case 'C':
        printf("You did okay\n");
        break;
    default:
        printf("Please enter only valid grades");
   }
}
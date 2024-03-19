/*
- Array: a data structurethat can store many value of the same data type.
- How to print an array with a loop
- 2D arrays
- Array of string


*/
#include<stdio.h>
#include<string.h>

// int main()
// {
    // double prices[] = {1.0,2.0,3.0,4.0,5.0};

    // for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) // size of array/size of each elements
    // {
    //     printf("$%.2lf\n",prices[i]);
                 
    // }
    
    // return 0;

   

    

    
    // int mat[3][3];
//     int index;
//     int numbers[2][3];

//     numbers[0][0] = 1;
//     numbers[0][1] = 2;
//     numbers[0][2] = 3;
//     numbers[1][0] = 4;
//     numbers[1][1] = 5;
//     numbers[1][2] = 6;

    
    


//     int rows = sizeof(numbers)/sizeof(numbers[0]);
//     int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);



//     printf("rows: %d\n", rows);
//     printf("columns: %d\n", columns);


//     for (int i = 0; i < rows; i++)
//     {

//         for (int j = 0; j < columns; j++)
//         {
//             printf("%d", numbers[i][j]);
//         }
//         printf("\n");
    
//     }
//     return 0;
// }



// Array of string 

int main()
{
    char car[][10] = {"GTR","Mustang","Camaro"};
    

    strcpy(car[0],"Tesla");
    

    for (int i = 0; i < sizeof(car)/sizeof(car[0]); i++)
    {
        printf("Best sale car: %s\n ",car[i]);
    }
    return 0;

}
/*
- String function
- Fget
- Nested loop
- do while loop



*/



#include<stdio.h>
#include<string.h>
int main()
{
    // char string1[] = "Vanh";
    // char string2[] = "Vinh";
    // int result;
    
   


    // strncat (str1,str2,n)                            //Append a n character from string 2 to string 1
    // strcat (str1,str2,n)                             //Append whole string2 to string 1
    // strcpy (str1, str2)                              //Replace content of string 1 by string2
    // strncpy (string1,string2,1);                     //Replace character n of string 1 by string 2
    // strset (string, 'x', 1);                         // Set whole character of string1 by other character
    // strnset(string1, 'a', 2);
    //strrev                                            // Reverse a string


    //strlen                                            //Return a string length as an interger
    // result = strcmp(string1,string2);                                            //Compare the two string lenght
    // result = stricmp(string1,string2);         


    // printf("%d",result);
    // printf("%s",string1);








    // char name[25];
    // printf("Enter your name \n");
    // fgets(name, 25,stdin);

    // printf("%s",name);
    // return 0;




//     int sum = 0;
//     int number = 0;

//     do
//     {
//         printf("Enter the number above 0: ");
//         scanf("%d", &number);
//         if (number > 0)
//         {
//             sum += number;
//         }
        
//     } while (number > 0);
    
// printf("%d", sum);




char rows = '*', columns;
int i,j;

for(i = 1; i <= 5; i++)
{
    for (j = 1; j <= i; j++)
    {
        printf("%c",rows);
    }
    printf("\n");
}
return 0;
}


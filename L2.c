#include<stdio.h>
#include<string.h>
int main()
{
    // // % la phep chia lay phan du

    // int x = 7;
    // int y = 3;
    // int z = x % y;
    // printf("%d",z); 

    // x++;
    // y--;

    // unsigned char name[25]; // number of bytes
    char name[25];
    int age;

    printf("What's your name?: ");
    fgets(name,25,stdin);
    // scanf("%s", name);
    name[strlen(name)-1] = '\0';

    printf("How old are you? : \n");
    scanf("%d", &age);

    printf("My name is %s \n", &name);
    printf("I am %d years old", age);
    return 0;



}
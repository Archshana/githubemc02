#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Please enter the age:");
    scanf("%d",&age);
    if(age>18){
        printf("The age is greater than 18");
    }
    if (age==18)
    {
        printf("The age is equal than 18");
    }
    if(age<18) {
        printf("The age is lessthan 18");
    }
    return 0;
}

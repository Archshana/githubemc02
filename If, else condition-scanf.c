#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Here enter your age:
           ");
    scanf("%d",&age);
    if (age>18){
        printf("The age is greater than 18");
    }
    else{
        printf("The age is lessthan 18");
    }
    return 0;
}

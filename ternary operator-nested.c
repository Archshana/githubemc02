#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    (age>18)?
    printf("This is greaterthan"):
        (age<18)?
        printf("This is lessthan"):
            printf("This is equal");
    return 0;
}

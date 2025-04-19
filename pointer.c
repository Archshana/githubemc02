#include <stdio.h>


int main()
{
    int num = 27;
    int* num1;
    int *num2;
    num1=&num;
    num2=&num;
    printf("The pointer value is:%d\n",*num1);
    printf("The pointer value is:%d\n",*num2);
    printf("The pointer value is:%p\n" ,num1);
    return 0;
}

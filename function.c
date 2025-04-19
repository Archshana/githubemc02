#include <stdio.h>
void sum(int a, int b) {
    int sum = a+b;
    printf("Sum=%d\n",sum);
}


int main()
{   int x;
    int y;
    printf("Enter two numbers\n");
    printf("Enter Number1:\n");
    scanf("%d",&x);


    printf("Enter Number2:\n");
    scanf("%d",&y);
    sum(x,y);

return 0;
}


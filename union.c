#include <stdio.h>
#include <stdlib.h>
    union data{
        int i;
        float f;
    };
int main()
{
    union data d1;
    d1.i=12;
    printf("%d\n",d1.i);
    d1.f=23.45;
    printf("%f\n",d1.f);

    return 0;
}

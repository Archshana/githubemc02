#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    while(x<=5){
        if(x==4){
            x++;
            continue;

        }
        printf("%d\n",x);
        x++;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    while(i<5){
        if(i==4){
            break;
        }
        printf("%d\n",i);
        i++;

    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0; i<=5; i++){
        if(i==2){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}

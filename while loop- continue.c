#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    while(x<9){
     if(x==3){
        x++;
        continue;

        }
        printf("%d\n",x);
        x++;
    }
    return 0;
}

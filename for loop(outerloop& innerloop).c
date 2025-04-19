#include <stdio.h>
#include <stdlib.h>
// Here, Look how to work Inner loop in Outer loop. We don't to close the sign bracket start the inner loop Look at!
int main()
{
    int x;
    int y;
    for(x=1; x<=2; ++x){
        printf("Outer loop:%d\n",x);

        for(y=1; y<10; y+=2){
            printf("Inner loop:%d\n",y);
        }
    }
    return 0;
}

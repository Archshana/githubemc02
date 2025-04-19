#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mynumbers[]={10,20,25,30,35,40};
    int length=sizeof(mynumbers)/sizeof(mynumbers[0]);
    int i;
    for(i=0; i<length; i++){
        printf("%d\n",mynumbers[i]);
    }
    return 0;
}

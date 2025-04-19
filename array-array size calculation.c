#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mynumbers[]={10,25,56,78,98,76};
    int length=sizeof(mynumbers)/sizeof(mynumbers[0]);
    printf("%lu",length);
    return 0;
}

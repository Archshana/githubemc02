#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ages[]={20,22,18,35,48,26,87,70};
    int i;
    int length=sizeof(ages)/sizeof(ages[0]);
    int lowestage=ages[i];
    for(i=0; i<length; i++)
    {
        if(lowestage>ages[i]){{
            lowestage=ages[i];

    }
    }
    }
    printf("The lowest age is:%d",lowestage);
    return 0;
}

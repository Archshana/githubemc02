#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int mynumber[20];
    for (i=0;i<=10;i++){
        printf("Enter your numbers here:");
        scanf("%d",&mynumber[i]);
    }
    for(i=10;i>=0; i--){
        printf("%d",mynumber[i]);
    }
    return 0;
}

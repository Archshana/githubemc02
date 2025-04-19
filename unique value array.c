#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[10];
    int unique[10];
    int i;
    printf("Integer values:\n");
    for (i=0;i<10;i++){
        scanf("%d\n",values[i]);
    }
    for(i=0; i<10; i++){
        if (values[i]==values[i]){
            continue;
        }
        for (i=0; i<10; i++){
            printf("%d",unique[i]);
        }
    }
    return 0;
}

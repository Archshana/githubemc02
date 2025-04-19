#include <stdio.h>


int main()
{
    int ages[]={20,22,18,35,48,26,87,70};
    float sum, average=0;
    int i;
    int length=sizeof(ages)/sizeof(ages[0]);
    for(i=0; i<length; i++){
        sum+=ages[i];
    }
    average=sum/length;
    printf("The avaerage age is:%.2f",average);
    return 0;
}

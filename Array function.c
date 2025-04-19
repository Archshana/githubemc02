#include <stdio.h>
int calculatesum (int x, int y){
    return x+y;

}

int main()
{
    int resultArr[6];
    resultArr[0]=calculatesum(5,3);
    resultArr[1]=calculatesum(8,2);
    resultArr[2]=calculatesum(15,15);
    resultArr[3]=calculatesum(9,1);
    resultArr[4]=calculatesum(7,7);
    resultArr[5]=calculatesum(1,1);

    for(int i=0; i<6; i++){
        printf("Result %d is =%d\n",i+1,resultArr[i]);
    }
    return 0;
}

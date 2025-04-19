#include <stdio.h>

    struct student{
    char name[20];
    int age;
    float num;
    char alpha;
};

int main()
{
    struct student s1={"Archsh kanesan",22,78.8,'a'};
    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%f\n",s1.num);
    printf("%c\f",s1.alpha);
    return 0;
}

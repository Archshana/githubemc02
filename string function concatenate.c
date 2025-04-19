#include <stdio.h>
#include <string.h>

int main()
{
    char str1[]="Hello";
    char str2[]="World";
    char str3[]="Hi";
    strcat(str1,str2,str3);
    printf("%s",str1);
    return 0;
}

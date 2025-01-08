#include <stdio.h>
int main ()
{
    char a[100];
    //scanf("%s",&a);canot read space
    gets(a);
    printf("%s",a);
    return 0;
}

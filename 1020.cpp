

#include <stdio.h>
int main ()
{
    char line [100];
    freopen("I020.c","r",stdin);
    while (gets(line))
        printf("%s",line);

    return 0;
}

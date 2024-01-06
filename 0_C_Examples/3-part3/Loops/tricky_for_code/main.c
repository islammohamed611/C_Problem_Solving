#include <stdio.h>
int main()
{
    int i=32,counter=0;
    for(;i;i>>=1)
    {
        printf("ok\n");
        counter++;
    }
    printf("ok printed number of times equal to %i ",counter);
    return 0;
}
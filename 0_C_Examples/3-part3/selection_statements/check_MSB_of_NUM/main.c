#include <stdio.h>
int main()
{
    signed int x=-2;
    if(((x&(1u<<31))>>31)==1)
    {
        printf("Msb is 1\n");
    }
    else
    {
        printf("Msb is 0\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int x=50,y;
    const int *const ptr=&x;
    ptr++;
    printf("x=%i",x);
    return 0;
}
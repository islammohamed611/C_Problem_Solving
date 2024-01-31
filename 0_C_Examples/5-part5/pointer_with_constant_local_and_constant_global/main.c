#include <stdio.h>
int main()
{
    const int x=5;
    int *ptr=&x;
    *ptr=70;
    printf("x=%i",x);
    return 0;
}
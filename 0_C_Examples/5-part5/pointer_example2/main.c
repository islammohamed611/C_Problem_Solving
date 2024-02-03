#include <stdio.h>
int main()
{
    int x=50;
    int *ptr;
    ptr=&x;
    *ptr=*ptr+5; //*ptr+=5;
    printf("*ptr=%i\n",*ptr);
    printf("x=%i",x);
    return 0;
}




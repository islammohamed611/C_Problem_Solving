#include <stdio.h>
int main()
{
    int *ptr1,*ptr2,x=5;
    ptr1=&x;
    ptr2=ptr1;
    printf("*ptr2=%i",*ptr2);
    return 0;
}



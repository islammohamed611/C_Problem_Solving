#include <stdio.h>
int main()
{
    int *ptr1,*ptr2;
    int x=5,y=6,z;
    ptr1=&x;
    ptr2=&y;
    z=*ptr1+*ptr2; // z=x+y
    printf("z=%i\n",z);
    return 0;
}
#include <stdio.h>
int main()
{

    int *ptr=2686700;
    printf("%p",*ptr);//garbage address in ptr
    //*ptr=1; //may cause runtime error
    return 0;
}

#include <stdio.h>
int main()
{
    int x=100;
    int *ptr=&x;
    printf("%i\n",ptr[0]);
    printf("%i\n",ptr[1]);
    return 0;
}
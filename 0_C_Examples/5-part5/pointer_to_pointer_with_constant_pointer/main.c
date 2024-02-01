#include <stdio.h>

int main()
{
    int x=50;
    int *const ptr1=&x;
    int **ptr2;
    printf("%i\n",ptr1);
    ptr2=&ptr1;
    (*ptr2)++;
    printf("%i\n",ptr1);
    return 0;
}
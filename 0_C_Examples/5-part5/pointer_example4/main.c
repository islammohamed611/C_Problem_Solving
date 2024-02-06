#include <stdio.h>
int main()
{
    int x=258,y;
    int *ptr1;
    char*ptr2;
    ptr1=&x;
    ptr2=&x;
    printf("%i\n",*ptr1);
    printf("%i\n",*ptr2);
    *ptr2=4;
    printf("%i\n",*ptr1);
    printf("%i\n",*ptr2);

    return 0;
}
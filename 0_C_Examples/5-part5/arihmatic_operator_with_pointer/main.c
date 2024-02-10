#include <stdio.h>
int main()
{
    int *ptr;
    int x=255,y;
    ptr=&x;
    printf("%i\n",ptr);
    printf("%i\n",&x);
    printf("%i\n",x);
    y=*ptr++;
    printf("%i\n",ptr);
    printf("%i\n",&x);
    printf("x=%i\n",x);
    printf("y=%i\n",y);
    printf("%i\n",*ptr);
    ptr=&x;
    y=*++ptr;
    printf("%i\n",ptr);
    printf("x=%i\n",x);
    printf("y=%i\n",y);
    printf("%i\n",*ptr);
    ptr=&x;
    (*ptr)++;
    printf("The value of ptr is : %i\n", ptr );
    printf("%i\n",&x);
    printf("x=%i\n",x);
    return 0;
}
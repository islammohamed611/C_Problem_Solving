#include <stdio.h>
int main()
{
    int x=5;
    int *y;
    y=&x;
    printf("%i\n",&x);
    printf("%i\n",y);
    printf("%i\n",&y);
    printf("%i\n",*y);
    printf("%i\n",*&y);
    printf("%i\n",&*y);
    return 0;
}
#include <stdio.h>
int x=5;
int main()
{
    int x=10;
    {
        int x;
        x=20;
        printf("x=%i\n",x);
    }
    printf("x=%i\n",x);
    return 0;
}
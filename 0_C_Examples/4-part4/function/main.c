#include <stdio.h>
int inc(int x);
int main()
{
    int w;
    int x=5;
    w=inc(x);
    printf("w=%i\n",w);
    printf("x=%i\n",x);
    return 0;
}

int inc(int x)
{

     return ++x;
}


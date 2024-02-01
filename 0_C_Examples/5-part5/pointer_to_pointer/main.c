#include <stdio.h>
int main()
{
    int **x,*y,z=50;;
    y=&z;
    x=&y;
    printf("%i",**x);
    return 0;
}
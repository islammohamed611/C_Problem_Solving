#include <stdio.h>
int main()
{
    int x=5,y=10;
    if(((++x)==5) && ((++y)==11))
    {
        printf("ok\n");
    }
    else if(((++x)==5) ||((++y)==11))
    {
        printf("not ok\n");
    }
    else
    {
        printf("ok ok");
    }
    return 0;
}
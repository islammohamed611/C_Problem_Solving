#include <stdio.h>
int main()
{
    int x,y;
    printf("please enter the values of two inputs:\n");
    scanf("%i%i",&x,&y);
    if(y>=0)
    {
        while(y!=0)
        {
            x++;
            y--;
        }
    }
    else
    {
        while(y!=0)
        {
            x--;
            y++;
        }
    }
    printf("the sum=%i",x);
    return 0;
}


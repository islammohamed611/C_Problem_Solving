#include <stdio.h>
int main()
{
    unsigned char x=5;
    switch(x)
    {
    case 1 ... 9:
        printf("number is less than 10\n");
        break;
    case 10 ... 99:
        printf("number is less than 100 and greater than or equal 10\n");
        break;
    default :
        printf("number is  greater than or equal 100\n");
    }
    return 0;
}
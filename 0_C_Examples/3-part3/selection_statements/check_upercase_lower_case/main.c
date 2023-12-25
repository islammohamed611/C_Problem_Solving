#include <stdio.h>
int main()
{
    unsigned char x='B';
    switch(x)
    {
    case 'a'... 'z':
        printf("character is lowercase\n");
        break;
    case 'A' ... 'Z':
        printf("character is uppercase\n");
        break;
    default :
        printf("wrong character\n");
    }
    return 0;
}
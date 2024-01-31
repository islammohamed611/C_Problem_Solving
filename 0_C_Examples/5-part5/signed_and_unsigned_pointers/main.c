#include <stdio.h>
int main()
{
    unsigned char *p;
    char *c;
    unsigned char x=255;
    p=&x;
    c=&x;
    printf("%i\n%i",*p,*c);
    return 0;
}
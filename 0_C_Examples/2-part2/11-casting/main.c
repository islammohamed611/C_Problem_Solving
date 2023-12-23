#include <stdio.h>
int main()
{
    unsigned long x=257;
    unsigned char y =x; // implicit casting
    unsigned char z=(unsigned char)x; //explicit casting
    printf("y=%i\n",y);
    printf("z=%i\n",z);
    return 0;
}

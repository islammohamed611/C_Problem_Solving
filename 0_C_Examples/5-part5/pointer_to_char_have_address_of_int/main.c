#include <stdio.h>
int main()
{
     int number=258;
    char *ptr;
    ptr=&number;
    printf("first byte of number=%i\n",*ptr);
    ptr++;
    printf("second byte of number=%i\n",*ptr);
    return 0;
}

#include <stdio.h>
int main()
{
    unsigned char counter,sum=0;
    for(counter=0;counter<=5;counter++)
    {
        sum=sum+counter; //sum+=counter
    }
    printf("sum=%i",sum);
    return 0;
}
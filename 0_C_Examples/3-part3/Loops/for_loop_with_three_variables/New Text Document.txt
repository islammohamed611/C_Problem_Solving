#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=0,j=4,k=0;j>=i;i++,j--,k++)
    {
        printf("ok\n");
    }
    printf("k=%i",k);
    return 0;
}
#include <stdio.h>
void function(int *p,int *q);
int main()
{
    int i=0,j=1;
    function(&i,&j);
    printf("i=%i\nj=%i\n",i,j);
    return 0;
}

void function(int *p,int *q)
{
    p=q;
    *p=2;
}
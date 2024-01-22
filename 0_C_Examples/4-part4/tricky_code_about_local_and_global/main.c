#include <stdio.h>
int var;
void fun();
int main()
{
    int var=var;
    printf("var=%i\n",var);
    fun();
    return 0;
}

void fun()
{
    printf("var=%i",var);
}
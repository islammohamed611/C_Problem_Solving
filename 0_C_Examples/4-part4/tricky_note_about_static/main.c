#include <stdio.h>
int print2(void);
void print(void);
int main()
{
    print();
    return 0;
}
void print(void)
{
    static int x=print2();//compilation error
    printf("x=%i\n",x);
}

int print2(void)
{
    printf("not ok\n");
    return 5;
}


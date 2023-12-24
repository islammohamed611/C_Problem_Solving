#include <stdio.h>
int main()
{
    char a = 251;
    unsigned char b = 251;

    printf("a = %c\n", a);
    printf("b = %c", b);

    if ((char)a==(char)b)
        {
      printf("\nSame");
        }
    else
        {
      printf("\nNot Same");
        }
    return 0;
}
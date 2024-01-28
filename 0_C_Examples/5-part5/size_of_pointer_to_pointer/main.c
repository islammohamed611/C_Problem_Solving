#include <stdio.h>
int main()
{
    int   **ptr1;
    char  **ptr2;
    short **ptr3;
    printf("%i\n",ptr1);
    printf("%i\n",ptr2);
    printf("%i\n",ptr3);
    ptr1++;
    ptr2++;
    ptr3++;
    printf("\n\n");
    printf("%i\n",ptr1);
    printf("%i\n",ptr2);
    printf("%i\n",ptr3);
    return 0;
}
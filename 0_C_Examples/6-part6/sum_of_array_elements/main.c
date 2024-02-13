#include <stdio.h>
int main()
{
    int i,sum=0;
    int arr[3];
    printf("please, fill the elements of the array :\n");
    for(i=0;i<=2;i++)
    {
        scanf("%i",arr+i); //scanf("%i",&arr[i]);
    }
    for(i=0;i<=2;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum=%i",sum);
    return 0;
}
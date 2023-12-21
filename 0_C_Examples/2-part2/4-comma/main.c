#include <stdio.h>


int main ()
{
	int k;  
	k=15,1,1 ;    // int k=15,1,1 ; This is an Error
	int y=(6,7,8);
	printf("%d\n",k);
	printf("%d\n",y);
	
	int x=(printf("hello world!\n"),8);
    printf("x=%i",x);
	
	return 0;
}


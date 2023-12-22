#include <stdio.h>
int main()
{
    int x=2,y=5,z;
	
    y=(x<<2)+ ++x;
    printf("x=%i\n",x);
    printf("y=%i\n",y);
	
	
	x=2;y=5;
	y= ++x + (x<<2);
    printf("x=%i\n",x);
    printf("y=%i\n",y);
	
	x=2;y=5;
	y=x<<2+ ++x;
    printf("x=%i\n",x);
    printf("y=%i\n",y);
	
    return 0;
}


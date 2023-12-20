#include <stdio.h>


int main ()
{
	int X=20;
	X++;
	printf("X= %d ",X);

	printf("X= %d ",X++);
	printf("X= %d ",++X);
	
	/********************************************/
	
	unsigned char x=6 , y=7 , z=8 , w ;
	w= x++ + y++ + --z ;
	
	printf("w= %d ",w);
	printf("x= %d ",x);
	printf("y= %d ",y);
	printf("z= %d ",z);
	
	/********************************************/
	
	int a=10 , b=20 ,c ;
	c= a+++b; //30
	printf("c= %d ",c);
	// c= x++++y; // Error
	c = a++ + +b; //31
	printf("c= %d ",c);

	/********************************************/

	return 0;
}


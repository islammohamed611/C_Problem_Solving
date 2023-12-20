#include <stdio.h>


int main ()
{
	char x,y;
	
	printf("Enter x : ");
	scanf("%c",&x);
	
	printf("Enter y : ");
	//fflush(stdin);fflush(stdout);
	scanf("%c",&y);
	
	
	printf("\nX = %c , Y = %c \n",x,y);


	
	return 0;
}


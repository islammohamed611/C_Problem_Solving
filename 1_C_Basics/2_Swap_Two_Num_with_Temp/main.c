/******************************************************************************************************************************************
 Assignment  : Swap_Two_Numbers_With_Temp
 Author      : Islam Mohamed Abdullah
 Date  		 : Nov  14 - 2023

******************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void main ()
{
	
	float Num1 ,Num2 ;
	float Temp;
	
	printf ("Enter the Num1 : ");
	scanf  ("%f", &Num1        );
	printf ("Enter the Num2 : ");
	scanf  ("%f", &Num2        );
	printf ("\n"               );
	
	Temp = Num1 ;
	Num1 = Num2 ;
	Num2 = Temp ;
	
	printf ("After swapping , value of a = %f\n",Num1);
	printf ("After swapping , value of a = %f\n",Num2);
	
}
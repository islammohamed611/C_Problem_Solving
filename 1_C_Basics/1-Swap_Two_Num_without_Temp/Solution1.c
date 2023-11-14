/******************************************************************************************************************************************
 Assignment  : Swap_Two_Numbers_Without_Temp_Sol1
 Author      : Islam Mohamed Abdullah
 Date  		 : Nov  14 - 2023

******************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void main ()
{
	
	float  Num1 , Num2 ;
	
	printf ("Enter value of Num1 :");
	scanf  ("%f" , &Num1 );
	printf ("Enter value of Num2 :");
	scanf  ("%f" , &Num2 );
	printf ("\n");
	
	
	Num1 = Num1  ^  Num2 ;
	Num2 = Num1  ^  Num2 ;
	Num1 = Num1  ^  Num2 ;
	
	printf ("After swappin , the value of Num1 = %f\n",Num1);
	printf ("After swappin , the value of Num2 = %f\n",Num2);
	
	
	
	
	
	
	
}
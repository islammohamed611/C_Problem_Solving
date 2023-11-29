/***************************************************************************
 Assignment  : EX2_C_Program_to_print_all_the_alphabets_using_a_pointer.c
 Author      : Islam Mohamed Bdullah
 Date  		 : /***************************************************************************
 Assignment  : EX2_C_Program_to_print_all_the_alphabets_using_a_pointer.c
 Author      : Mahmoud Karem Zamel
 Date  		 : NOV 29 - 2022
****************************************************************************/

#include <stdio.h>


void main ()
{
	char ch = 'A' ;
	char* ptr ;
	ptr = &ch ;
	
	printf ("\n");
	while(*ptr <= 'Z')
	{
		printf ("%c\t",*ptr);
		(*ptr)++;
	}
	printf ("\n");

}

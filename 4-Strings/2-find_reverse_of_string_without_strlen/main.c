/***************************************************************************
 Assignment  : C_Program_to_Find_the_length_of_string_without_strlen.c
 Author      : Islam Mohmaed Abdullah
 Date  		 : DEC  13 - 2022
****************************************************************************/

#include <stdio.h>

#define SIZE 50

void main ()
{
	char ch ;
	int Counter=0 ;
	char String[SIZE];
	
	printf ("\nEnter a String: ");
	gets(String);

	while (String[Counter] != '\0')
	{
		Counter++;
	}
	
	printf ("\nLength of string: %i",Counter);
	printf ("\n");

	
}
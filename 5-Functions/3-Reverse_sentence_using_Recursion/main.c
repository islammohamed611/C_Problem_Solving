/***************************************************************************
 Assignment  : EX3_C_Program_to_Reverse_a_Sentence_Using_Recursion.c
 Author      : Islam Mohamed Abdullah
 Date  		 : NOV  25 - 2022
****************************************************************************/

#include <stdio.h>

void Reverse_Sentence ();


void main ()
{
	int x ,y;

	printf ("Enter a Sentence: ");
	Reverse_Sentence();
}

void Reverse_Sentence ()
{
	char ch ;
	scanf ("%c" , &ch);
	
	if (ch != '\n')
	{
		Reverse_Sentence();
		printf ("%c",ch);
	}

}
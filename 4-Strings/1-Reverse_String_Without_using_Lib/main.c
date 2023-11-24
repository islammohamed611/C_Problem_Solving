#include <stdio.h>


#define SIZE  100
void main (void)
{
	
	int Counter=0 ,Length=0;
	char String[SIZE];
	char String_Rev[SIZE];
	
	
	printf("\nEnter the String :");
	gets(String);
	
	Length = strlen(SIZE);
	
	while (String[Counter] !='\n')
	{
String_Rev[Length-Counter-1] = String[Counter];
Counter++;
}
	
	String_Rev[Length] = '\n';
	Counter =0;
	printf("\n Revers string is :");
	while (String_Rev[Counter] != '\n')
	{
		printf ("%c" , String_Rev[Counter);
		Counter++;
		
	}
	
	
	
	printf ("\n");
	
	
}
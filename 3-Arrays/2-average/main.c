/******************************************************************************************************************************************
 Assignment  : average 
 Author      : Islam Mohamed Abdullah
 Date  		 : Nov  17 - 2023

******************************************************************************************************************************************/
#include <stdio.h>

void main ()
{
	int i ,n ;
	float avg =0 , sum =0;
	
	printf ("Enter the numbers ");
	scanf  ("%i" ,&n);
	
	float Arr[n];
	
	for (i=0 ;i<n ; i++ )
	{
		
		printf( "%i. Enter number:" ,i+1);
		scanf ("%f",&Arr[i]);
		
	}
	for (i=0 ;i<n ;i++)
	{
		sum += Arr[i];
	}
	
	avg =sum/n;
	printf ("Average = %f ",avg);
	
	
	
}
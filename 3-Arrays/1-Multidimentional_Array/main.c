/******************************************************************************************************************************************
 Assignment  : Multidimensional_Array 
 Author      : Islam Mohamed Abdullah
 Date  		 : Nov  16 - 2023

******************************************************************************************************************************************/

#include <stdio.h>

void main ()
{
	
float Arr1[2][2] , Arr2[2][2];
int i,j;

printf("Enter the elemints of 1st matrix \n");
for (i=0 ;i<2 ;i++)
{
	for (j=0 ;j<2 ;j++)
	{
		printf("Enter a%i%i : ",i+1,j+1 );
		scanf ("%f" , &Arr1[i][j] );
		
	}
	
	
}

printf ("Enter The elemts of 2nd matrix \n");
for (i=0 ;i<2 ;i++)
{
	for (j=0 ;j<2 ;j++)
	{
		printf("Enter b%i%i :" ,i+1 ,j+1);
		scanf ("%f",&Arr2 [i][j] );
		
	}
	
	
}
	

printf ("Sum of Matrix : \n ");
for (i=0 ;i<2 ;i++)
{
	for (j=0 ;j<2 ;j++)
	{
		printf("%f\t",Arr1[i][j]+Arr2[i][j]);
	}
	printf ("\n");
	
	
}

}
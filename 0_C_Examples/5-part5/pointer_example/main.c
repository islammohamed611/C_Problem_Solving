#include <stdio.h>
int main ()
{

   unsigned int  var = 20;   // variable declaration and initialization
   unsigned int  *ip;        // pointer variable declaration

   ip = &var;  // store address of var in pointer variable
   printf("%p\n", &var  ); //address stored in pointer variable
   printf("%p\n", ip );
   printf(" %u\n\n", *&var );
   printf("%u\n", *ip );  //access the value using the pointer
   
   // printf("%i\n", sizeof(ip) );

   return 0;
}


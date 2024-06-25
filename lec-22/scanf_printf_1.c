#include <stdio.h>
int main( ) {

   char str[50];
  

   printf( "Enter a value: ");
   scanf(" %49[^\n]", str);

   printf( "\nYou entered: %s ", str);

   return 0;
}

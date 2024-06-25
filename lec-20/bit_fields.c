#include <stdio.h>
#include <string.h>

/* define simple structure 8 bytes*/
struct {
   unsigned int widthValidated;
   unsigned int heightValidated;
} status1;

/* define a structure with bit fields 4 bytes*/
struct {
   unsigned int widthValidated : 1;
   unsigned int heightValidated : 1;
} status2;
 
int main( ) {
   printf( "Memory size occupied by status1 : %ld\n", sizeof(status1));
   printf( "Memory size occupied by status2 : %ld\n", sizeof(status2));
   return 0;
}

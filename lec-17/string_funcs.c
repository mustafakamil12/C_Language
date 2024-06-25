#include <stdio.h>
#include <string.h>

int main () {

   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   char str4[12] = "Hello";
   int  len ;

   /* copy str1 into str3 */
   strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );

   /* concatenates str1 and str2 */
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );

   /* total lenghth of str1 after concatenation */
   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );

   /* Comparing s1 and s4*/
   if( strcmp(str1, str4) == 0 ){
      printf("strcmp(str1, str4) :  strings are equal\n");
   } else {
      printf("strcmp(str1, str4) :  strings are not equal\n");
   }

   /* Returns a pointer to the first occurrance of charcter H in string s1 */
   char *result = strchr(str1,'o');
   printf("strchr(str1,o) -> find H in the position %ld\n", result - str1);

   return 0;
}

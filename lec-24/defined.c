#include <stdio.h>

#if !defined (MESSAGE)
   #define MESSAGE "Mustafa Marquis de Baghdad!"
#endif

int main(void) {
   printf("Here is the message: %s\n", MESSAGE);  
   return 0;
}

#include <stdio.h>

int main(){
  int area;

  const int LENGTH = 10;
  const int  WIDTH =  5;
  const char NEWLINE = '\n';

  area = LENGTH * WIDTH;
  printf("value of area: %d",  area);
  printf("%c", NEWLINE);

  return 0;

}

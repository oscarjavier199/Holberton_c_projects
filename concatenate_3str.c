#include <stdio.h>
#include <string.h>

// this code will print 2 concatenated strings "london bridge"
//  and then will print 3 concatenated strings "california"
//  finally will print 4 concatenated strings "hello world"

int main()
{

  char s1[] = "London";
  char s2[] = " Bridge";

  char c[] = "Cali";
  char f[] = "for";
  char n[] = "nia";

  strcat(s1, s2);
  printf("%s\n", s1);

  strcat(c, f);
  strcat(c, n);
  printf("%s\n", c);

  char c2[] = "He";
  char c3[] = "ll";
  char t[] = "o";
  char n2[] = " World";

  strcat(c2, c3);
  strcat(c2, t);
  strcat(c2, n2);
  printf("%s\n", c2);
}
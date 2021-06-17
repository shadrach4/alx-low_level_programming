#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
  char charType;
  int intType;
  long int long_int_Type;
  long long int long_long_int_Type;
  float floatType;

  printf("size of char: %zu byte\n", sizeof(charType));
  printf("size of int: %zu byte\n", sizeof(intType));
  printf("size of long int: %zu byte\n", sizeof(long_int_Type));
  printf("size of long long int: %zu byte\n", sizeof(long_long_int_Type));
  printf("size of float: %zu byte\n", sizeof(floatType));
  return(0);
}
  

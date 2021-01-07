#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'a';
  float c = 3.14;
  double d = 33.1415;
  long double e = 3500000.2;
  unsigned int f = 7;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\nchar b value: %c and size %lu bytes\nfloat c value: %f and size %lu bytes\ndouble d value: %f and size %lu bytes\nlong double value: %Lf and size %lu bytes\nunsigned int f value: %u and size %lu bytes\n", a, sizeof(a), b, sizeof(b), c, sizeof(c), d, sizeof(d), e, sizeof(e), f, sizeof(f)); 
}


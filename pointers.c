#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  float d = 12.55;
  float e = 11.33;

  printf("the value of d is %f\nthe address of d is %p\nthe value of e is %f\n the address of e is %p\n", d, (void*)&d, e, (void*)&e);
  float* ptrtod = &d;
  float* ptrtoe = &e;
  float f;
  f = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = f;
  printf("swapped values:\n the value of d is %f\nthe value of e is %f\n", d, e);
  
}

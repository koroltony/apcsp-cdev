#include <stdio.h> 
#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
float areaOfCircle(float radius){
float a = radius*radius*M_PI;
return a;
}



int main(int argc, char* argv[]) 
{
  char input[256];
  float start;
  char input2[256];
  int end;
  printf("start radius: ");

  while (1){
  fgets(input, 256, stdin);
  if ((sscanf(input," %f ", &start) == 1) && (start > 0)) break;
  printf("provide a real radius\n");
}
  printf("# of iterations: ");

  while (1){
  fgets(input2, 256, stdin);
  if ((sscanf(input2," %d ", &end) == 1) && (end > 0)) break;
  printf("provide a non-zero integer\n");
}
  // for testing only - do not change
  getTestInput(argc, argv, &start, &end);

  printf("calculating area of circles starting at %f, with %d iterations\n", start, end);
  
  // add your code below to call areaOfCircle function with values between
  // start and end
float r;
for (int i = 0; i < end; i++){
r = areaOfCircle(start+i);
printf("%f units^2\n", r);
}  
}

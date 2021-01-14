#include <stdio.h>



// student structure
//struct Student...
struct Student{
char firstName[50];
char lastName[50];
int age;
int studentId;
};

void printStudent(struct Student* student)
{
printf("Student: %s %s\n", student->firstName, student->lastName);
printf("age: %d\n", student->age);
printf("id: %d\n", student->studentId);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
  for(int i = 0; i < num; i++){
printf("%d. ", i+1);
printStudent(&(students[i]));
}}


int main()
{

  // an array of students
  //xxx students;
  struct Student students[50];
  int numStudents = 0;
  char input[256];
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
    if (numStudents >= 50){
printf("Too many students");
break;
}
else {
printf("enter first name: ");
fgets(input, 256, stdin);
if(sscanf(input, "%s", students[numStudents].firstName) !=1){ 
printf("error entering first name");
break;
}
else {
printf("enter last name: ");
fgets(input, 256, stdin);
if(sscanf(input, "%s", students[numStudents].lastName) !=1){
printf("error entering last name");
break;
}
else {
printf("enter age: ");
fgets(input, 256, stdin);
if(sscanf(input, "%d", &(students[numStudents].age)) !=1){
printf("error entering values");
break;
}
else {
printf("enter id: ");
fgets(input, 256, stdin);
if(sscanf(input, "%d", &(students[numStudents].studentId)) !=1){
printf("error entering id");
break;
}} 
}
}
}
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}

#include <stdio.h>
#include <string.h>

int main(){

char alphaString[26];

for(int i = 0; i < 26; i++){
alphaString[i] = 'a' + i;
}
alphaString[26]='\0';
printf("string: %s\n", alphaString);

char alphaString2[] = "abcdefghijklmnopqrstuvwxyz";

for(int i = 0; i < strlen(alphaString2); i++){
alphaString2[i] -= 32;
}
printf("uppercase string: %s\n", alphaString2);

if (strcmp(alphaString, alphaString2) == 0){
  printf("The strings are equivalent\n");
}
else {
printf("The strings are not equivalent\n");
}
char alphaString3[strlen(alphaString)+strlen(alphaString2)];
strcpy(alphaString3, alphaString);
strcat(alphaString3, alphaString2);
printf("string: %s\n", alphaString);
printf("uppercase string: %s\n", alphaString2);
printf("both strings: %s\n", alphaString3); 
}

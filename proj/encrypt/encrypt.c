//
// encrypt.c
//

#include <string.h>
#include <stdio.h>
#include "encrypt.h"


char CHARS[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int CHARS_LEN = 62;


char shiftChar(char c, int shift, int direction)
{
  // DEBUG printf("%c ", c);
  // implement the character shift here:
  //  given a char c shift it either forwards (direction == 1) or backwards (direction == 0)
  //  use the CHARS array above
  //  return the newly shifted char
  //
  // eg.
  //   shiftChar('c', 3, 1) : 'f'
  //   shiftChar('S', 2, 0) : 'P'
  //   shiftChar('b', 3, 0) : '8'
for (int i =0; i < CHARS_LEN; i++){ //for
if (c == CHARS[i]){ //if c=char
  if((direction == 1) && (shift < CHARS_LEN-i)){
  c = CHARS[i+shift];
  //DEBUG printf("(1)%c\n", c);
  return c;
}
   else if((direction == 1) && (shift >= CHARS_LEN-i)){
   c = CHARS[(i+shift)-CHARS_LEN];
   //DEBUG printf("(2)%c\n", c);
  return c;
}
    else if((direction == 0) && (shift <= i)){
    c = CHARS[i-shift];
    //DEBUG printf("(3)%c\n", c);
   return c;
}
     else if((direction == 0) && (shift > i)){
     c = CHARS[CHARS_LEN-(shift-i)];
     //DEBUG printf("(4)%c\n", c);
    return c;
}
}// if c=char
}//for
//DEBUG printf("error c not found\n");
return c;
}

void encrypt(char str[], int shifts[], int shiftslen)
{
  for (int i = 0; i < strlen(str); i++) 
  {
    char c = str[i];

    str[i] = shiftChar(c, shifts[i%shiftslen], 1);
  }
}


void decrypt(char str[], int shifts[], int shiftslen)
{
  for (int i = 0; i < strlen(str); i++) 
  {
    char c = str[i];

    str[i] = shiftChar(c, shifts[i%shiftslen], 0);
  }
}


void caesarEncrypt(char str[], int shift)
{
  int shifts[] = { shift };
  encrypt(str, shifts, 1);
}


void caesarDecrypt(char str[], int shift)
{
  int shifts[] = { shift };
  decrypt(str, shifts, 1);
}



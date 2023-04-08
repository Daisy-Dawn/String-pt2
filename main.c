#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//printing a string of characters using own logic

int main(void) 
{
  /*int count = 0;
  char name[500];
  printf("Enter Sentence String:\t");
  gets(name);
  count = strlen(name);
  printf("\nSentence lenght is = %d\n", count);*/
  
  int count, i;
  char name[300];
  printf("Enter Your String of characters:\t");
  gets(name);
  
for (count = 0, i = 0; name[i] != '\0'; i++)
  count++;
  puts(name);
  
  printf("\nThe lenght of your string is = %d\n", count);

  printf("\n\nEnd of program\n");
  sleep(20);
  system("clear");
  printf("Welcome, User");
}
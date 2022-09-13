//HARSHED ABDULLA CSA 43
//To write a program to count the number of characters,lines in a file. 
#include <stdio.h>


int main() {
  

  char ch;
  int char_count = 0, line_count = 0;
  int in_word = 0;
  char file_name[1024];
  FILE *fp;

  printf("Enter a file name: ");
  scanf("%s", file_name);

  fp = fopen(file_name, "r");

  if(fp == NULL) {
    printf("Could not open the file %s\n", file_name);
    return 1;
  }

  while ((ch = fgetc(fp)) != EOF) {
    char_count++;
    

      if(ch == '\n') ++line_count;
  }

  if(char_count>0) ++line_count;
  printf("In the file %s:\n", file_name);
  printf("Number of characters: %d.\n", char_count);
  printf("Number of lines: %d.\n", line_count);

  return 0;
}


//-----------------OUTPUT---------------------

//file.txt
//According to a launch invitation released by TVS Motor Company,
//Here's what we have figured out about the bike from the invitation poster
//1. A new motorcycle, and not a scooter, will be launched by TVS
//2. The motorcycle has been labeled the 'All-New Racer's Choice'

//Enter a file name: file.txt
//In the file file.txt:
//Number of characters: 265.
//Number of lines: 4.
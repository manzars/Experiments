/*Title:Naive String Matching
* Learner:Mohammed Rizwan
* Roll no:16CO39
 */

#include <stdio.h>
#include <string.h>
 

int match(char text[], char pattern[]) 
{
  int c, d, e, text_length, pattern_length, position = -1;
 
  text_length    = strlen(text);
  pattern_length = strlen(pattern);
 
  if (pattern_length > text_length) {
    return -1;
  }
 
  for (c = 0; c <= text_length - pattern_length; c++) {
    position = e = c;
 
    for (d = 0; d < pattern_length; d++) {
      if (pattern[d] == text[e]) {
        e++;
      }
      else {
        break;
      }
    }
    if (d == pattern_length) {
      return position;
    }
  }
 
  return -1;
}

int main() 
{
  char text[100], pattern[100];
  //int position;
 
  printf("Enter text: ");
  gets(text);
 
  printf("Enter a string to find: ");
  gets(pattern);
 
  //position = match(a, b);
 
  if(match(text,pattern) != -1) {
    printf("Found at location %d\n", match(text,pattern)+1);
  }
  else {
    printf("Not found.\n");
  }
 
  return 0;
}

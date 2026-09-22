/***************************************
* 26w - Lab4 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h> // define EOF

int main(){
  int c;
  int numBlank = 0;
  int numLines = 0;
  int count = 0;
 sub
  c = getchar();
  while(c != EOF)  /* no end-of-file yet */
  { 
    c = getchar(); /* read next */
    if (c == '\n'){
      numLines++;
      continue;
    }
    else if (c == ' '){
      numBlank++;
    }
    count++;
  }
  printf("# of chars: %d (# of blanks: %d)\n",count, numBlank);
  printf("# # of lines: %d\n", numLines);

}

/***************************************
* 26w - Lab4 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h> // define EOF

int main(){
  int c;
  int numA = 0;
  int count = 0;
 
  c = getchar();
  while(c != EOF)  /* no end-of-file yet */
  { 
    count++;  // spaces and '\n' also counted
    c = getchar(); /* read next */
    if (c == 'a'){
      numA++;
    }
  }
  printf("# of chars: %d\n",count);
  printf("# of char 'a': %d\n", numA);

}

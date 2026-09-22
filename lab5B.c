/***************************************
* EECS2031M - Lab5 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h>

int main(){
  int c, outC;
  
  c = getchar();
  while (c != EOF){
    if (c >= 'a' && c <= 'z'){
      outC = c - 32;
    }
    else if (c >= '0' && c <= '4'){
      outC = '-';
    }
    else if (c >= '6' && c <= '9'){
      outC = '+';
    }
    else{
      outC = c;
    }
    putchar(outC);
    c = getchar();
  }
  return 0;
}

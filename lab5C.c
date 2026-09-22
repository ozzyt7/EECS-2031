/***************************************
* EECS2031M - Lab5 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/
#include <stdio.h>
#define SIZE 10

int main() {
  int c, numChar;
  int arr[SIZE] = {0};
  
  while ((c = getchar()) != EOF){
	if (c >= '0' && c <= '9'){
	  arr[c - '0']++;
	}
	else{
	  numChar++;
	}
  }
  
  for (int i = 0; i < SIZE; i++){
    printf("%d: %d\n", i, arr[i]);
  }
  printf("X: %d\n", numChar);
  return 0;
}

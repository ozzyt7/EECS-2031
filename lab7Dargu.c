// your information goes here
/***************************************
* 26w - Lab07 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h>
#include <string.h>

int main(int argn, char *argv[]){
  int total = 0, i = 2, num = 0;

  printf("There are %d arguments (excluding \"%s\")\n", argn - 2, *argv);

  if (!strcmp(*(argv + 1), "sum")){
    for (; i < argn - 1; i++){
      for (int j = 0; j < strlen(*(argv + i)); j++){
         num = num * 10 + (*(*(argv + i) + j) - '0');
      }
      total += num;
      num = 0;
      printf("%s + ", *(argv + i));
    }
    for (int j = 0; j < strlen(*(argv + i)); j++){
         num = num * 10 + (*(*(argv + i) + j) - '0');
      }
      total += num;
      printf("%s", *(argv + i));
      printf("\n= %d\n", total);
  }
  else{
    char *startTotal = *(argv + 2);
    for (int j = 0; j < strlen(startTotal); j++){
         num = num * 10 + (*(startTotal + j) - '0');
      }
     total = num;
     num = 0;
     printf("%s - ", startTotal);
    for ( i = 3; i < argn - 1; i++){
      for (int j = 0; j < strlen(*(argv + i)); j++){
         num = num * 10 + (*(*(argv + i) + j) - '0');
      }
      total -= num;
      num = 0;
      printf("%s - ", *(argv + i));
    }
    for (int j = 0; j < strlen(*(argv + i)); j++){
         num = (num * 10) - (*(*(argv + i) + j) - '0');
      }
      total -= num;
      printf("%s", *(argv + i));
      printf("\n= %d\n", total);
  }


}


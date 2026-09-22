// your information goes here
/***************************************
* 26w - Lab07 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/


#include <stdio.h>
#include <string.h>

#define SIZE 11


void exchangeParr(char *[], int);
void printParr(char *[], int);
void printParr2(char **, int);


main(){

  char * inputs[SIZE] = {"giraffes are high 0", "mosquitos are annoying 1",
  "monkeys are smart 2", "kangaroos are funny 3"};

  char arr1 [] = "dogs are friendly 4";
  char arr2 [] = "hippos are huge 5";
  char arr3 [] = "cobras are fearsome 6";
  char arr4 [] = "foxes 7";
  char arr5 [] = "elephants 8";
  char arr6 [] = "hens 9";
  char arr7 [] = "bisons 10";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  inputs[8] = arr5;
  inputs[9] = arr6;
  inputs[10] = arr7;

  printf("sizeof char*: %d, sizeof pointer array: %d\n\n", sizeof(char*), sizeof inputs );

  // displays the array by calling function printParr()
  printParr(inputs, SIZE);
  


  // swaps pointees of the first and the second element pointers here
  char *temp = *inputs;
  *inputs = *(inputs + 1);
  *(inputs + 1) = temp;

  // calls sub-function exchangeParr() to swap some other pointees;
  exchangeParr(inputs, SIZE);

  printf("\n== after swapping ==\n");   printf("===========================\n");

  // now displays the exchanged array by calling function printParr()
  printParr(inputs, SIZE);

  
  // displays the exchanged array again by calling another function printParr2()

 printParr2(inputs, SIZE);


}

/* exchanges some pointees of the pointer array */
void exchangeParr(char *pArr[], int n){
  for (int i = 2; i < n - 1; i = i + 2){
     char *temp = *(pArr + i);
     *(pArr + i) = *(pArr + i + 1);
     *(pArr + i + 1) = temp;
  }
}

/* outputs the first n pointees of the pointer array */ 
void printParr(char *pArr[], int n){
  for (int i = 0; i < n; i++){
    printf("[%d] -*-> %s\n", i, *(pArr + i));
  }
}

/* outputs the first n pointees of the pointer array -- the 'decayed' argument */
void printParr2(char **pArr, int n){ 
  printf("\n");
  for (int i = 0; i < n; i++){
    printf("[%d] -*-> %s\n", i, *(pArr + i));
  }

}

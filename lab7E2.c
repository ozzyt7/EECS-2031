// your information goes here
/***************************************
* 26w - Lab07 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

/* Passing array to a function. */

#include <stdio.h>

#define MAX_INPUT 32
 
// more headers, declarations, as needed
void display(int *);
int largest(int *, int);

 main(int argc, char *argv[])
 {
     int array[MAX_INPUT], count;

     /* Input MAX_INPUT values from the stdin */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store input in array[count] without using []
        count++;
     }

      *(array + count) = -1;
      /* Call the functions and display the returned value. */
      printf("Inputs: ");
      display(array);
     
     
      printf("\nLargest value: %d\n", largest(array, count));
     
     return 0;
 }
 
 /* displays the content of the parameter integer array */
 void display(int *arr)
 {
   for (int i = 0; *(arr + i) != -1; i++){
     printf("%d ", *(arr + i));
   }
 }


/* this function returns the largest value */
/* in the parameter integer array who has n elements */
 int largest(int * arr, int n)
 {
  int bigNum = *arr;
  for (int i = 0; i < n; i++){
    if (*(arr + i) > bigNum){
      bigNum = *(arr + i);
    }
  }

   return bigNum;
 }



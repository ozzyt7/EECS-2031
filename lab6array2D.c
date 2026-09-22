// your information goes here
/***************************************
* 26w - Lab06 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

/* Reads in a list of strings from the keyboard, then re-organize them */
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAX_LINES 34
 #define MAX_COLS  54 
 void exchange2D(char[][MAX_COLS], int);
 void print2D(char[][MAX_COLS], int);

 main()
 {
     char inputs[MAX_LINES][MAX_COLS];
     printf("sizeof inputs: %d\n\n", sizeof inputs);
     int i = 0;
     /* Read in the lines from the stdin (keyboard) now, using function fgets() */
 
     printf("Enter a string: ");
     fgets(inputs[0], MAX_COLS, stdin);

     while (i < MAX_LINES)
     {
       if (inputs[i][0] == 'x' && inputs[i][1]  == 'x' && inputs[i][2] == 'x' && inputs[i][3] == '\n'){
         break;
       }
       i++;
       printf("Enter a string: ");
       fgets(inputs[i], MAX_COLS, stdin);
     }
     printf("\n");
     
     // displays the array by calling sub-function print2D(...)
     print2D(inputs, i);

     // swaps the first and second row here
     char temp[MAX_LINES][MAX_COLS];
     strcpy(temp[0], inputs[0]);
     strcpy(inputs[0], inputs[1]);
     strcpy(inputs[1], temp[0]);
  
     // calls sub-function exchange2D() to swap some other rows
     exchange2D(inputs, i);

     printf("\n== after swapping ==\n");
     
     // displays the (exchanged array) by calling sub-function print2D()
     print2D(inputs, i);

     return 0;
 }


 // Exchange of rows. need to involve data movement 
 void exchange2D(char p[][MAX_COLS], int n)
 {
   char tempExtend[MAX_LINES][MAX_COLS];
   
   for (int j = 2; j < n - 1; j = j + 2){
     strcpy(tempExtend[j], p[j]);
     strcpy(p[j], p[j + 1]);
     strcpy(p[j + 1], tempExtend[j]);
   }
 }

 // output the 2D array, row by row
 void print2D(char p[][MAX_COLS], int n)
 {
   for (int k = 0; k < n; k++){
     printf("[%d]: %s", k, p[k]);
   }
   
 }                        


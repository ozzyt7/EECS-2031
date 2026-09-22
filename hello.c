/***************************************
* 26w - Lab4 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h>

int main(){
 int x; int y; int z;

 printf("Please enter an integer number: ");

 scanf("%d", &x);
 y = x * 3;
 z = x * 4;

 printf("Hi, you enetered %d. Triple and quadruple of %d are %d and %d, respectively.\n", x, x, y, z);
}


/***************************************
* 26w - Lab4 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h>

int main(){
 int a,b,c;

 printf("Enter month, day, year seperated by spaces: ");
 scanf("%d %d %d", &a, &b, &c);

 printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d\n", a, b, c, c, a, b, c, a, b);

}

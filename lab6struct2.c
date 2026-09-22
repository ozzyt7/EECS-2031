// your information goes here
/***************************************
* 26w - Lab06 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h>
#include <stdlib.h>

struct ints
{ 
   int data1;
   int data2;
};


void processStruc (struct ints);
struct ints getSumDiff(int, int);
void printStruc (struct ints);


main()
{
  struct ints a = {100,4};
  printf("struct a before process: %d %d\n", a.data1, a.data2);
  processStruc(a);  // pass by value
  // display a's members again, no change
  printf("struct a after  process: %d %d\n\n", a.data1, a.data2);  

  // functions that return a struct, thus encapsulating multiple values 
  /**********************************  */
  int num1, num2;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  while ( 1){
   if (num1 == -1 && num2 == -1){
     break;
   }
   // call getSumDiff() to calcaulte 
   struct ints c = getSumDiff(num1,num2);
   printStruc(c);
   // call printStruc () to output sum and diff;

   // prompt and read again
   printf("Enter two integers: ");
   scanf("%d %d", &num1, &num2);

 }
  
 /********************************** */
  
}   

/* call/pass by value  */
void processStruc(struct ints x){

  x.data1 ++;
  x.data2 +=100;
}

struct ints getSumDiff(int a, int b){
  struct ints temp = {a + b, a - b};
  return temp;
}

void printStruc (struct ints x){
 printf("sum is: %d, diff is: %d\n", x.data1, x.data2);
}

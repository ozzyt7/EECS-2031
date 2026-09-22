/***************************************
* 26w - Lab4 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h>

float sum(float, float);

void greet(int);

int main()
{  
   int a = 2011 + 20;
   greet(a);
   int b = 1015 - 3;
   greet(b);
   float x, y;
   int count = 0;
   int num;
   printf("Enter the number of interactions: ");
   scanf("%d", &num);
   while (count < num){
     printf("\n");
     printf("Enter two float numbers seperated by ##: ");
     scanf("%f##%f", &x, &y);
     float su= sum(x,y);
     printf( "%f + %f = %f (%.2f)\n", x,y, su, su);
     count++;
	   
   }
   
   return 0;

}

/* function definition */
float sum (float i, float j){
   return i + j;             
}

/* need to revise this function */
void greet(int i){
  printf("Hello %d!\n", i);
}


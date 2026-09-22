/***************************************
* EECS2031M - Lab5 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h>

int isDigit(char);
int isLetter(char);
int isOperator(char);

int main(){
   int num;
   char c;
   while (1){
     printf("Enter an integer and a charcater seperated by a blank: ");
     scanf("%d %c", &num, &c);
     if (num == -10000){
       break;
     }
     if (isDigit(c) == 0){
       int sum = num + (c - '0');
       printf("Character '%c' represents a digit. Sum of %d and %c is %d\n\n", c, num, c, sum);
       continue;
     }
     if (isLetter(c) == 0){
       printf("Character '%c' represents a letter\n\n", c);
       continue;
     }
     if (isOperator(c) == 0){
       printf("Character '%c' represents an operator\n\n", c);
       continue;
     }
     printf("Character '%c' represents others", c);
   }
   return 0;
}

int isDigit(char c){
   if (c >= '0' && c <= '9'){
     return 0;
   }
   return 1;
}

int isLetter(char c){
   if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z')){
     return 0;
   }
   return 1;

}

int isOperator(char c){
   if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%'){
     return 0;
   }
   return 1;
}

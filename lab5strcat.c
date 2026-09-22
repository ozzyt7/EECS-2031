/***************************************
* EECS2031M - Lab5 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include<stdio.h>
#include <string.h>
//include string library header files

//more declarations as needed
void my_strcat(char[], char[]);

#define SIZES 35

int main(){
   char a[SIZES];
   char b[SIZES];
   char c[SIZES];
   char d[SIZES];

   scanf("%s",a);
   scanf("%s",b);
   while (1)  {
      if (strcmp(a, "xxx") == 0 && strcmp(b, "xxx") == 0) {
        break;
      }
      strcpy(c,a); strcpy(d,b);

      strcat(a,b);
      my_strcat(c,d);
      
      printf("strcat:   %s\n", a);
      printf("mystrcat: %s\n\n", c);
      scanf("%s",a);
      scanf("%s",b);
   }

   return 0;
}

//your version of strcat implementation here
void my_strcat(char des[], char src[]){
  int end = strlen(des);
  int i;

  for (i = 0; src[i] != '\0'; i++){
    des[end + i] = src[i];
  }
  des[end + i] = '\0';
}

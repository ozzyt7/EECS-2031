// your information goes here
/***************************************
* 26w - Lab07 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 56 
// more headers, declarations, as needed
void sortArr(char *);
void sortArr2(char *);

int main()
{
   char *ptr;
   int lastIndex;
   char arr[SIZE]; char arrB[SIZE];
   fgets(arr,SIZE,stdin);
   while (1)
   {
      ptr = arr;
      if (*ptr == 'q' && *(ptr + 1) == 'u' && *(ptr + 2) == 'i' && *(ptr + 3) == 't' && *(ptr + 4) == '\n'){
         break;
      }
       // manually remove (replace) the trailing \n in the first place
       
       lastIndex = strlen(arr) - 1;
       *(ptr + lastIndex)= '\0';

       strcpy(arrB, arr);
       
       sortArr(arr);
       printf("%s\n", arr);

       sortArr2(arrB);
       printf("%s\n\n", arrB);

       //....

       fgets(arr,SIZE,stdin);

    }
   return 0;
}

// two sorting function definitions
void sortArr (char * arr){
   int n = strlen(arr);
   for (int i = 0; i <= n - 2; i++){
      for (int j = n - 1; j >= i + 1; j--){
         if (*(arr + j) < *((arr + j) - 1)){
            char temp = *(arr + j);
            *(arr + j) = *((arr + j) - 1);
            *((arr + j) - 1) = temp;
         }
      }
   }
}

void sortArr2 (char * arr){
   int n = strlen(arr);

   for (int i = 0; i <= n-2; i++){
      int smallest = i;
      for (int j = i + 1; j <= n - 1; j++){
         if (*(arr + j) < *(arr + smallest)){
            smallest = j;
         }
      }
      char temp = *(arr + i);
      *(arr + i) = *(arr + smallest);
      *(arr + smallest) = temp;

   }
}

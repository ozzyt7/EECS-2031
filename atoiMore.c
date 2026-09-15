#include <stdio.h>
#include <stdlib.h>  // for atoi

#define SIZE 14

int isQuit(char[]);
int my_atoi(char[]);
int length(char[]);
 
int main(){
  int a,b;
  char arr [SIZE];

  printf("Enter a word of positive number or 'quit': " );
  scanf("%s", arr);
  while(isQuit(arr))
  {
    printf("%s\n", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t%d\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n", b,b,b, b*2, b*b);
    printf("Enter a word of positive number or 'quit': " );
    scanf("%s", arr);
   
  }

  return 0;

}

/* converts an array of (digit) characters into a decimal value*/

/* Recommended book K&R scans from left to right.
 Here you should scan from RIGHT to LEFT. This is a little more complicated 
 but more straightforward approach (IMHO) */

int my_atoi (char c[])
{
  int num = 0;
  int power = 1;
  if (c[0] == '0' && c[1] != '\0'){
    if (c[1] == 'X' || c[1] == 'x'){
      for (int i = length(c) - 1; i >= 2; i--){
        if (c[i] == 'A' ||c[i] == 'B' || c[i] == 'C' || c[i] == 'D' ||c[i] == 'E' || c[i] == 'F'){
          num += ((c[i] - 'A') + 10)*power;
          power *= 16;
        }
        else if(c[i] == 'a' ||c[i] == 'b' || c[i] == 'c' || c[i] == 'd' ||c[i] == 'e' || c[i] == 'f'){
          num += ((c[i] - 'a') + 10)*power;
          power *= 16;
        }
        else{
          num += (c[i] - '0')*power;
          power *= 16;
        }
      }
    }
  
  else{
       for (int i = length(c) - 1; i >= 0; i--){
         num += (c[i] - '0')*power;
         power *= 8;
       }
    }
}
  
  else{
    for (int i = length(c) - 1; i >= 0; i--){
      num += (c[i] - '0')*power;
      power *= 10;
    }
  }
  return num;

}

int isQuit(char c[]){
  if (c[0] != 'q' && c[1] != 'u' && c[2] != 'i' && c[3] != 't'){
    return 1;
  }

  return 0;
}

int length(char arr[])
{
  int counter = 0;
  int length = 0;
  while (arr[counter] != '\0'){
    length++;
    counter++;
  }
  return length;
}

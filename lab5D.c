/***************************************
* EECS2031M - Lab5 *
* Author: Naurangsar, Shiekh *
* Email: osman38@my.yorku.ca *
****************************************/

#include <stdio.h>
#define MAX_SIZE 20

void displayStr(char[]);
int length(char[]);
int indexOf(char[], char);
int occurrence(char[], char);
int isQuit(char[]);

int main() {

   char word[MAX_SIZE];
   char c;

   char helloArr[]  = "helloWorld";
   printf("\"%s\" contains %d characters, but the size is %d (bytes)\n", helloArr, length(helloArr), sizeof(helloArr));
   helloArr[5] = '\0'; helloArr[3]='X'; helloArr[7] ='Y';
   printf("\"%s\" contains %d characters, but the size is %d (bytes)\n\n", helloArr, length(helloArr), sizeof(helloArr));


   /********** Fill in your code below **********/
   printf("Enter a word and a character separated by blank: ");
   scanf("%s %c", word, &c);

   while (!isQuit(word))   
   {  
     // don't change these first two lines
     printf("Input word is \"");
     displayStr(word);
     printf("\n");
     printf("Contains %d characters\n", length(word));
     printf("'%c' appears %d times in the word\n", c, occurrence(word, c));
     printf("Index of '%c' in the word is %d\n", c, indexOf(word, c));

     printf("\nEnter a word and a character separated by blank: ");
     scanf("%s %c", word, &c);

   }
   return 0;
}

//functions to implement
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

int indexOf(char arr[], char c)
{
  int numIndex = -1;
  for (int i = 0; arr[i] != '\0'; i++){
    if (arr[i] == c){
      numIndex = i;
      break;
    }
  }
  return numIndex;
}

int occurrence(char arr[], char c)
{
  int numChar = 0;
  for (int i = 0; arr[i] != '\0'; i++){
    if (arr[i] == c){
      numChar++;
    }
  }
  return numChar;
}

void displayStr(char arr[])
{
  for (int i = 0; arr[i] != '\0'; i++){
    putchar(arr[i]);
  }
  
}

int isQuit (char arr[])
{
 int i;
 if (arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t')
    return 1; 
 else 
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
char a[20] = "Hello";

for (int i = 0; i < strlen(a); i++){
for (int j = i; a[j] != '\0'; j++){
printf("%c", a[j]);
}
printf("\n");
}

printf("\n");

return 0;
}

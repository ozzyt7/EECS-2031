#include <stdio.h>

int main(){
int *ptr, *p1, *p2;
int arr[] = {1,2,7,4,6,7,8,9};

ptr = &arr[0];
p1 = arr;

ptr = ptr + 3;

printf("%d %d\n", *ptr, *p1);

}

#include<stdio.h>
#include<stdlib.h>

 int main(int argc, char * argv[]) {
   int l, arr[100], n;

   int first = arr[0];
   int second = arr[0];
   int x;

   for (x = 0; x <= n; x++) {
     arr[x] = atoi(argv[x]);
   }
   for (x = 0; x < 10; x++) {
     if (first < arr[x]) {
       second = first;
       first = arr[x];
     } else if (second < arr[x]) {
       second = arr[x];
     }

   }

   printf("First = %d\n", first);
   printf("Second = %d\n", second);

   return 0;
 }
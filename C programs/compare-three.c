#include<stdio.h>

int CompareNums(int d1, int d2, int d3) {
   int d;
   /*Comparing each number to find the largest*/

   if (d1 > d2 && d1 > d3)
      d = d1;
   else if (d2 > d1 && d2 > d3)
      d = d2;
   else if (d3 > d2 && d3 > d1)
      d = d3;

   printf("%d is the largest number.\n", d);
}
int SameNum(int d1, int d2, int d3) {

   if (d1 == d2 || d2 == d3 || d1 == d3) {
      return printf("error: two numbers entered are the same\n");
   }
   return (0);
}

/*Code to take input from Command-line*/
int main(int argc, char * argv[]) {
   int d, d1, d2, d3;
   /*Convert Arguments to integers*/
   d1 = atoi(argv[1]);
   d2 = atoi(argv[2]);
   d3 = atoi(argv[3]);
   if (SameNum(d1, d2, d3) == 0) {

      CompareNums(d1, d2, d3);
   }
   return (0);
}

/* C program to compare three numbers taken from command-line and print which is the largest. */

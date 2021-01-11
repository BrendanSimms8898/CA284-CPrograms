#include<stdio.h>

/* initialise main function */
int main(int argc, char * argv[]) {
   int n;
/* make command-line argument variable n */
   n = atoi(argv[1]);
/*hailstone formula in code */
   while (n > 1) {
      if (n % 2 == 0)
         n = n / 2;
      else
         n = (3 * n) + 1;
      printf("%d\n", n);
   }
   return (0);
}
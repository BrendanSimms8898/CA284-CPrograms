#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(int argc, char ** argv) {
  int x, y;

  int first = INT_MIN;  
  int second = INT_MIN; /* this will set the firsat and second to the minimum required values*/
    if (argc < 2){
      printf("Insufficient arguments provided\n");
      exit(0);
    }  /*if less than two command line arguments are provided it will rpint this message and enter exit status*/

  for (y = 1; y < argc; y++) {

    x = atoi(argv[y]); /*This changes the array to an integer*/

    if (x > first) { 
      second = first;
      first = x;
    } /*this shifts the original value of x*/
      else if (x < 0){
      printf("Error: only positive integers are permitted.\n");
      exit(0);
      }  /* enters exit status if non-positive integers are provided*/
     else if (x > second){  
      second = x;
     } /*this saves only the second value*/
  }
  printf("%d\n", second);
  return 0;
}
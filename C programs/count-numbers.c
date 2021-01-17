#include<stdio.h>

#include<stdlib.h>

int oddnumbers(int num[10]) {

  int x = 0;
  int count = 0;
  while (x < 10) {
    if (num[x] % 2 != 0) {
      count++;
      x++;
    } else {
      x++;
    }
  }
  return count;
}

int evennumbers(int num[10]) {

  int x = 0;
  int count = 0;
  while (x < 10) {
    if (num[x] % 2 == 0) {
      count++;
      x++;
    } else {
      x++;
    }
  }
  return count;
}

int main() {
  int array[10] = {
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10
  };
  printf("Number of odd numbers: %x\n", oddnumbers(array));
  printf("Number of even numbers: %x\n", evennumbers(array));

  return 0;
}

//basic code to display counting numbers functions can be incorporated with ArrayGeneration function used in Sorting algorithim project

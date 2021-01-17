#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//Derived from https://hackr.io/blog/bubble-sort-in-c#:~:text=Bubble%20Sort%20in%20C%20is,until%20the%20array%20is%20sorted.
void bubble_sort(int arr[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {   // loop n times - 1 per element
        for (j = 0; j < n - i - 1; j++) { // last i elements are sorted already
            if (arr[j] > arr[j + 1]) {  // swop if order is broken
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int ArrayGeneration(int arr[], int size) { //function for array generation

    srand(time(NULL));

    for(int y=0; y < size; y++) { //for loop that exists for y < size
        arr[y] = rand() % size; //generates and fills arr[y] with true random numbers > 1000000
    }
    return 0;
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void sort_exe(int arr[], int size) {
    clock_t start, end;
    double timeTotal;

    for(int x=0; x < size; x++) {
        ArrayGeneration(arr, size);
        start = clock(); //clock start
        bubble_sort(arr, size); //sort algorithim ran
        end = clock();//clock stop
        }
        timeTotal = timeTotal + ((double) (end - start)) /CLOCKS_PER_SEC;
    printf("Took %f seconds to run sort successfully\n", timeTotal);
}

// Derived from https://www.techiedelight.com/reverse-array-c/
void reverse_array(int arr[], int size){
  for (int i = 0; i < size / 2; i++){
    int tmp = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - i - 1] = tmp;
  }
}

int main (int argc, char * argv[]) {
int size;

size = atoi(argv[1]);

int arr_bb[size];


sort_exe(arr_bb, size);
//printArray(arr_bb, size); for checking sort is sorting correctly

reverse_array(arr_bb, size);

//printArray(arr_bb, size); for checking array reversal function working
printf("Reverse Array\n");
sort_exe(arr_bb, size);

//printArray(arr_bb, size); for checking its sorting reversed array correctly
}

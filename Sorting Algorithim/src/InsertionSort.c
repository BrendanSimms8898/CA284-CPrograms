#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//Derived from https://www.geeksforgeeks.org/insertion-sort/
void insertionsort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
        quicksort(arr, size); //sort algorithim ran
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

int arr_is[size];

//printArray(arr_qs, size); for checking array generation

sort_exe(arr_is, size);
//printArray(arr_qs, size); for checking sort is sorting correctly

reverse_array(arr_is, size);

//printArray(arr_qs, size); for checking array reversal function working
printf("Reverse Array\n");
sort_exe(arr_is, size);

//printArray(arr_qs, size); for checking its sorting reversed array correctly
}

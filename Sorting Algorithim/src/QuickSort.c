#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//Derived from https://www.geeksforgeeks.org/quick-sort/
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
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
        quicksort(arr, 0, size); //sort algorithim ran
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

int arr_qs[size];

//printArray(arr_qs, size); for checking array generation

sort_exe(arr_qs, size);
//printArray(arr_qs, size); for checking sort is sorting correctly

reverse_array(arr_qs, size);

//printArray(arr_qs, size); for checking array reversal function working
printf("Reverse Array\n");
sort_exe(arr_qs, size);

//printArray(arr_qs, size); for checking its sorting reversed array correctly
}

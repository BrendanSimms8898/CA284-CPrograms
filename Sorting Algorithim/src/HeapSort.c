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

// Derived from https://www.mygreatlearning.com/blog/heap-sort/
 void heapify(int arr[], int n, int i) { //function to prepare array for heap sort by setting the order of values of PArent and Children Nodes
    int max = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < n && arr[leftChild] > arr[max])
      max = leftChild;

    if (rightChild < n && arr[rightChild] > arr[max])
      max = rightChild;

    if (max != i) {
      swap(&arr[i], &arr[max]);
      heapify(arr, n, max);
    }
  }

  void heapsort(int arr[], int n) { //heap sort algorithim
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);

      heapify(arr, i, 0);
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
        heapsort(arr, 0, size); //sort algorithim ran
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


sort_exe(arr_hs, size);
//printArray(arr_hs, size); //for checking sort is sorting correctly

reverse_array(arr_hs, size);

//printArray(arr_hs, size); //for checking array reversal function working
printf("Reverse Array\n");
sort_exe(arr_hs, size);

//printArray(arr_hs, size); //for checking its sorting reversed array correctly
}

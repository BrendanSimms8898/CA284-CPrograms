#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>

int oddNums(int arr[], int size){

    int i = 0;
    int count = 0;
    while(i < size){
        if(size % 2 != 0){
            count++;
            i++;
        } else {
            i++;
        }
    }
    printf("Number of odd numbers: %d\n", count);

}

int evenNums(int arr[], int size){
    
    int i = 0;
    int count = 0;
    while(i < size){
        if(size % 2 == 0){
            count++;
            i++;
        } else {
            i++;
        }
    }
    printf("Number of even numbers: %d\n", count);
}

int primeNums(int array[], int size)
{
    int count = 0;
    int i = 0;
    for(i; i < size; i++)
    {
        int a = array[i];
        if(a==2)
            count++;
        int j = 2;
        for(j, j < a; j++;)
        {
            if(a % j == 0)
            {
                break;
            }
            else
            {
                count++;
                break;
            }
        }
    }
    printf("Number of prime numbers: %d\n", count);
            
}

int ArrayGeneration(int arr[], int size) { //function for array generation

    srand(time(NULL));
	int y=0;
    for(y, y < size; y++;) { //for loop that exists for y < size
        arr[y] = rand(); //generates and fills arr[y]
    }
    return 0;
}
 
int main(int argc, char**argv[])
{
	int size;
	size = atoi(argv[1]);
	
	int arr[size];
	
	ArrayGeneration(arr, size);
    if(size < 0)
    {
        printf("error: Only positive intergers are permitted\n");
    }
    
    else if(isalpha(size)){
        printf("error: only numbers are permitted");
    }
    else if(argc == 1)
    {
        printf("insufficient command line arguments\n");
    }
    else{
        oddNums(arr, size);
        evenNums(arr, size);
        primeNums(arr, size);
    }
    return(0);
}

//code that generates a random array and counts even, odd and prime numbers

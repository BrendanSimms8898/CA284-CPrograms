#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check_palin(char string1[], char string2[]){
    int palindrome = 1;  /*change this to 0 throughout the code if it is NOT a palindrome*/

    int i;
    int j;/*index for the second array*/

    for(i=0,j=0;string1[i] != '\0'; i++)  /*to eliminate spaces, special characters and capital letters from the string*/
    {
        if (isdigit(string1[i]) != 0){
            printf("Invalid input: Numbers not permitted.\n");
            printf("\n");
            return 1;
        }
        if( (string1[i] < 'A' || string1[i] > 'Z' ) && (string1[i] < 'a' || string1[i] > 'z' ) ) /* checks if the element is a special character*/
            continue;
        else if(string1[i] >= 'A' && string1[i] <= 'Z' )
            string1[i] += 32;

        string2[j] = string1[i];
        j++;
    }
    string2[j] = '\0'; /*assigning the last element with null character*/

    int k,stringlen = strlen(string2); /*storing length after eliminating unecessary characters*/

    for(k=0;k<=stringlen/2;k++) /*starts the loop from first element to the middle element*/
    {
        if(string2[k] != string2[stringlen-k-1]) /*checks if the elements are true*/
        {
            palindrome = 0;   /*checks the first  element with the first element from the last and second element with the penultimate element and so on*/
            break;
        }
    }

    /*at the end you need to test*/
    if (palindrome)
        printf("this string is a palindrome.\n");
    else
        printf("This string is not a palindrome.\n");

}

int main()
{
    char string1[100];
    char string2[100];/*the string without spaces and special characters will be stored in this*/

    printf("Please enter a string:  \n");
    scanf("%[^\n]", string1);

    check_palin(string1, string2);

    return 0;
}

//program to check for palindrome ignoring special chgaracters and white space

#include<stdio.h>

int main()
{
     int argc, i, sum=0;
     scanf("%d", &argc);

     for(i=0;i < argc; i++)
     {
      sum = sum+i;

      if(sum == argc)
      {
       printf("%d is a triangular number.\n", argc);
       break;
      }
     }

     if(argc == i)
     {
      printf("%d is not a triangular number.\n", argc);
     }
     return(0);
}
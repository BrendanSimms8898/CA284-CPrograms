#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int conversion(int argc, char *argv[]) {
	int i;
	int result = 0;
	for(i=0;argv[1][i]!='\0'; i++)
	{
		if (argv[1][i]=='1')
			result=result *2+1;
		else
			result=result *2;
	}

	return result;
}
int main(int argc, char *argv[]) {
	int x;
	int result;
    for(x=0;argv[1][x]!=0 && argv[1][x]>8; x++)
    {
    	if (argv[1][x]!='1' || argv[1][x]!='0')
    		printf ("Only digits 1 and 0 are permitted.\n");
    	else
    		printf ("%d\n",result);
    }
    return 0;
}

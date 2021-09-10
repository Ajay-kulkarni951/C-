#include<stdio.h>

#define MARVELLOUS 11

void fun()
{
    #define MARVELLOUS 21
}

int main()
{
    printf("%d\n",MARVELLOUS);
  
     fun();
    
    printf("%d\n",MARVELLOUS);
    
    return 0;
}

/*

void (*fp)(int, char);
fp is a function pointer which points to the function which will accept 2 poarameters as int and char, and function
will return nothing.

int (*fp)();
fp is a function pointer which points to the function which will nothing, and function
will return integer.

void (*fp)();
fp is a function pointer which points to the function which will accept nothing, and function
will return nothing.

double (*fp)(int, char);
fp is a function pointer which points to the function which will accept 2 poarameters as int and char, and function
will return double.

*/

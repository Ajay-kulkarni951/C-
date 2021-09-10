#include<stdio.h>

int main()      // Entry point function
{
    int no = 11;
    
    printf("Demonstration of Data Object / Variable \n");
    
    printf("R-Value is : %d\n",no);
    
    printf("L-Value is : %p\n",&no);
    
    printf("Size of Data Object is %lu\n",sizeof(no));
    
    return 0;   // Return success to the OS
}

/*
    %d  Decimal number
    %u  Unsigned numebr
    %p  Pointer in HEX
    %ld Long integer

 */

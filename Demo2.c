#include<stdio.h>

int main()      // Entry point function
{
    // Demonstration of Premitive data types
    char ch = 'M';
    
    int no = 11;

    float f = 3.14;

    double d = 9.6745354;
    
    printf("Size of character : %lu\n",sizeof(ch));
    printf("Size of integer : %lu\n",sizeof(no));
    printf("Size of float : %lu\n",sizeof(f));
    printf("Size of double : %lu\n",sizeof(d));
    
    return 0;   // Return success to the OS
}

#include<stdio.h>

// Array : Array is a collection of homogeneous elements in the sequential format.

int main()      // Entry point function
{
    // Member initialisation list
    int Arr[5] = {11,21,51,101,111};
    
    printf("Sizeof whole array is %lu\n",sizeof(Arr));  // 20
    
    printf("Sizeof single element of array is %lu\n",sizeof(Arr[0]));  // 4
    
    printf("Base address of array is %lu\n",Arr);  //

    printf("Base address of array is %lu\n",&Arr);
    
    return 0;   // Return success to the OS
}











/*
char Carr[5];
int Iarr[5];
float Farr[5];
double Darr[5];
*/


















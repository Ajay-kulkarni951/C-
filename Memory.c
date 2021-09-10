#include<stdio.h>   // standard input output
#include<stdlib.h>  // standard library
#include<unistd.h>  // Universal standard

// void *realloc(Address of old ememory , Number of new bytes);

int main()
{
    // Dynamic memory allocation
    int *ptr = NULL;
    int size = 5;
    
    ptr = (int *)calloc(size,sizeof(int));      // c alloc  Calculated allocation
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    printf("Dynamic memory gets allocated in Heap at the address %lu\n",ptr);
    
    ptr = realloc(ptr,8 * sizeof(int));
    
    printf("Dynamic memory gets reallocated in Heap at the address %lu\n",ptr);
    
    printf("Free the allocated memory\n");
    
    free(ptr);
    
    return 0;
}






















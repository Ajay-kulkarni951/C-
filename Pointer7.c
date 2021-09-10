#include<stdio.h>

int main()
{
    int Arr[5] =  {10,20,30,40,50};
    
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    ptr1 = &(Arr[0]);
    ptr2 = &(Arr[3]);

    printf("%lu\n",ptr1); // 100
    ptr1++;     // ptr1 = ptr1 + 1;
    printf("%lu\n",ptr1); // 104
    
    printf("%lu\n",ptr2);       // 112
    ptr2--;         // ptr2 = ptr2 - 1;
    printf("%lu\n",ptr2);       // 108
    return 0;
}
ptr1++;
ptr1 = ptr1 + 1;
ptr1 = ptr1 + 1 * sizeof(pointer type);
ptr1 = ptr1 + 1 * sizeof(int);
ptr1 = ptr1 + 1 * 4;
ptr1 = ptr1 + 4;
ptr1 = 100 + 4;
ptr1 = 104;

ptr2--;
ptr2 = ptr2 - 1;
ptr2 = ptr2 - 1 * sizeof(pointer type);
ptr2 = ptr2 - 1 * sizeof(int);
ptr2 = ptr2 - 1 * 4;
ptr2 = ptr2 - 4;
ptr2 = 112 - 4;
ptr2 = 108;

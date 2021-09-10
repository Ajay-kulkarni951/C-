#include<stdio.h>

int main()
{
    double Arr[3][6];
    
    printf("%lu\n",sizeof(Arr));              //  144
    
    printf("%lu\n",sizeof(Arr[2]));       //  48
    
    printf("%lu\n",sizeof(Arr[2][2]));    // 8
    
    return 0;
}

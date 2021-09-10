#include<stdio.h>
int main()
{
    double no1 = 10.1,no2 = 20.1, no3 = 30.1,no4 = 40.1;
    double *Arr[4] = {&no1,&no2,&no3,&no4};
    
    printf("%lu\n",Arr); // 100
    printf("%lu\n",Arr[0]);  // 200
    printf("%lf\n",no1); // 10.1
    printf("%lu\n",&no3);    // 400
    printf("%d\n",sizeof(Arr)); // 32
    printf("%d\n",sizeof(no2)); // 8
    printf("%lu\n",&(Arr[3]));   // 124
    printf("%lf\n",*(Arr[3]));   // 40.1
    
    return 0;
}






















#include<stdio.h>

int x = 10;             // Gloabal variable

void fun()
{
    int z = 30;         // Local variable of fun
    printf("%d\n",y);
}

int main()
{
    int y = 20;         // Local variable of main
    printf("%d\n",z);
    
    fun();
    
    return 0;
}

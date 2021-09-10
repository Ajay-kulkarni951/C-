#include<stdio.h>

void fun();

void gun();

int main()
{
    fun();
    
    return 0;
}

void fun()
{
    printf("Inside fun");
    
    gun();
}

void gun()
{
    printf("Inside gun");
}








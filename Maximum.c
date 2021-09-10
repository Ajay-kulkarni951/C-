#include<stdio.h>

int Maximum(int,int);

int main()
{
    int no1 = 0, no2 = 0, ret = 0;
    
    printf("Enter first number\n");
    scanf("%d",&no1);
    
    printf("Enter second number\n");
    scanf("%d",&no2);
    // Call by value
    ret = Maximum(no1,no2); // Maximum(11,21);
    
    printf("Maximum number is : %d\n",ret);
    
    return 0;
}

int Maximum(int Value1, int Value2)
{
    if(Value1 > Value2)
    {
        return Value1;
    }
    else
    {
        return Value2;
    }
}























#include<stdio.h>

//  1   2   4   8   16  32  64  128 256 512

#pragma pack(1)     // To avoid padding
struct Date
{
    int Day : 6;
    int Month : 5;
    int Year : 13;
};
int main()
{
    int i = 0;
    struct Date obj;
    
    printf("Enter Day : ");
    scanf("%d",&i);
    
    obj.Day = i;
    
    printf("Value is : %d\n",obj.Day);
    
    return 0;
}

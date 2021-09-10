#include<stdio.h>

int main()
{
    // i is a variable of type integer initialised with the value 11.
    int i = 11;
    // ip is a variable of type integer pointer which stores address of i.
    int *ip = &i;
    
    // ch is a variable of type character initialised with the value 'M'
    char ch = 'M';
    // cp is a variable of type character pointer which stoires address of ch.
    char *cp = &ch;
    
    printf("Value of i is : %d\n",i);                           //  11
    printf("Address of i is : %lu\n",&i);                   // 100
    printf("Value of ip : %lu\n",ip);                           //  100
    printf("Address of ip : %lu\n",&ip);                    //  200
    printf("Data pointed by the ip is : %d\n",*ip);     // 11
    printf("Size of the i is : %d\n",sizeof(i));            //  4
    printf("Size of ip is : %d\n",sizeof(ip));              //  8
    
    printf("Value of ch is : %c\n",ch);                     // M
    printf("Address of ch is : %lu\n",&ch);                // 300
    printf("Value of cp : %lu\n",cp);                          //   300
    printf("Address of cp : %lu\n",&cp);                    //  400
    printf("Data pointed by the cp is : %c\n",*cp);     //  M
    printf("Size of the ch is : %d\n",sizeof(ch));          //  1
    printf("Size of cp is : %d\n",sizeof(cp));              //  8
    
    return 0;
}






















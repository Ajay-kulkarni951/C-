#include<stdio.h>

int main()
{
    int no = 11;
    int *p = &no;
    int **q = &p;
    int ***x = &q;
    int ****y = &x;
    int *****z = &y;
    
    printf("%d\n",no);      // 11
    printf("%d\n",&no);     // 100
    printf("%d\n",y);       // 400
    printf("%d\n",**x);     // 100
    printf("%d\n",&x);  // 400
    printf("%d\n",&z);  // 600
    printf("%d\n",***z);    //200
    printf("%d\n",**q); // 11
    printf("%d\n",&q);  // 300
    printf("%d\n",*p);  // 11
    printf("%d\n",sizeof(z));   //8 or 4
    printf("%d\n",&(**q));  // 100
    printf("%d\n",&(*p));   // 100
    printf("%d\n",*****z);  // 11
    printf("%d\n",****y); //11
    return 0;
}






















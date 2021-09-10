#include<stdio.h>

int main()
{
    double no = 11.12; // Consider address of no as 100
 double *a = &no; // Consider address of a as 200
 double **b = &a; // Consider address of b as 300
 double ***c = &b; // Consider address of c as 400
 double ****d = &c; // Consider address of d as 500
 
 printf("%d\n",sizeof(no));   //  4
 printf("%d\n",sizeof(a));        // 8
 printf("%d\n",sizeof(b));    //  8
 printf("%d\n",sizeof(c));    //  8
 printf("%d\n",sizeof(d));    //  8
 printf("%d\n",sizeof(**d));  //8
 printf("%d\n",sizeof(****d));    //4
 printf("%d\n",sizeof(*a));   //  4
 printf("%d\n",sizeof(***c)); //  4
 printf("%d\n",sizeof(**c));  //  8
 
    return 0;
}

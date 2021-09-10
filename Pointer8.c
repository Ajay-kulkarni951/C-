#include<stdio.h>

int main()
{
    char ch = 'M';
    int i = 11;
    float f = 10.2;
    double d = 20.5;
    // Specific pointers
    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;
    // GEneric pointer
    void *p = NULL;
    
    printf("%c\n",*cp); // M
    printf("%d\n",*ip); // 11
    printf("%f\n",*fp); //  10.2
    printf("%f\n",*dp); //  20.5
    
    p = &ch;
    // printf("%c\n",*p);  // Error
    printf("%c\n",*(char *)p);  // M
    
    p = &i;
    printf("%d\n",*(int *)p);   // 11
    
    printf("%lu\n", p);
    printf("%lu\n", (int *)p+1);    // 104
    
    return 0;
}






















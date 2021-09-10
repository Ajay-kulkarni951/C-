#include<stdio.h>
int main()
{
	unsigned int No = 30;
	unsigned int Res = 0;
	
	Res = No >> 3;
	printf("%u\n",Res);
	return 0;
}

//  x >> y   ==   x / 2 ^ y
// 30 >> 3   ==  30 / 2 ^ 3   ==  30 / 8  ==  3
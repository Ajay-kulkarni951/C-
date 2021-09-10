
#include<stdio.h>

int main()
{
	unsigned int no1 = 15;
	unsigned int no2 = 22;
	unsigned int res = 0;
	res = no1 & no2;
	printf("%u\n",res);
	res = no1 | no2;
	printf("%u\n",res);
	res = no1 ^ no2;
	printf("%u\n",res);
	printf("%u\n",~no1);
	return 0;
}
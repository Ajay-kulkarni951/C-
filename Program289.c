// Accept number from and make its third bit OFF if it is ON 
 
#include<stdio.h>
 
unsigned int OffBit(unsigned int iNo)
{
	unsigned int iMask = 0xFFFFFFFB;
	unsigned int Result = 0;
 
	Result = iNo & iMask;
 
	return Result;
}
 
int main()
{
	unsigned int iValue = 0;
	unsigned int iRet = 0;
 
	printf("Enter number\n");
	scanf("%u",&iValue);
 
	iRet = OffBit(iValue);
 
	printf("Number after updation %u\n",iRet);
 
 	return 0;
}